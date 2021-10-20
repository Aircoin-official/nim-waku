{.push raises: [Defect].}

import 
  options, chronos, stint,
  web3,
  eth/keys,
  libp2p/protobuf/minprotobuf,
  stew/arrayops

## Bn256 and RLN are Nim wrappers for the data types used in  
## the rln library https://github.com/kilic/rln/blob/3bbec368a4adc68cd5f9bfae80b17e1bbb4ef373/src/ffi.rs
type Bn256* = pointer
type RLN*[E] = pointer


type 
  # identity key as defined in https://hackmd.io/tMTLMYmTR5eynw2lwK9n1w?view#Membership
  IDKey* = array[32, byte]
  # hash of identity key as defined ed in https://hackmd.io/tMTLMYmTR5eynw2lwK9n1w?view#Membership
  IDCommitment* = array[32, byte]
  

type 
  MerkleNode* = array[32,byte] # Each node of the Merkle tee is a Poseidon hash which is a 32 byte value
  Nullifier* = array[32,byte]
  ZKSNARK* = array[256, byte]
  Epoch* = array[32,byte]

# Custom data types defined for waku rln relay -------------------------
type MembershipKeyPair* = object 
  ## user's identity key (a secret key) which is selected randomly 
  ## see details in https://hackmd.io/tMTLMYmTR5eynw2lwK9n1w?view#Membership
  idKey*: IDKey 
  # hash of user's identity key generated by 
  # Poseidon hash function implemented in rln lib
  # more details in https://hackmd.io/tMTLMYmTR5eynw2lwK9n1w?view#Membership
  idCommitment*: IDCommitment 

type RateLimitProof* = object
  ## RateLimitProof holds the public inputs to rln circuit as 
  ## defined in https://hackmd.io/tMTLMYmTR5eynw2lwK9n1w?view#Public-Inputs
  ## the `proof` field carries the actual zkSNARK proof 
  proof*: ZKSNARK
  ## the root of Merkle tree used for the generation of the `proof` 
  merkleRoot*: MerkleNode
  ## the epoch used for the generation of the `proof` 
  epoch*: Epoch
  ## shareX and shareY are shares of user's identity key
  ## these shares are created using Shamir secret sharing scheme 
  ## see details in https://hackmd.io/tMTLMYmTR5eynw2lwK9n1w?view#Linear-Equation-amp-SSS
  shareX*: MerkleNode
  shareY*: MerkleNode
  ## nullifier enables linking two messages published during the same epoch
  ## see details in https://hackmd.io/tMTLMYmTR5eynw2lwK9n1w?view#Nullifiers
  nullifier*: Nullifier
  
type MembershipIndex* = uint64

type WakuRLNRelay* = ref object 
  membershipKeyPair*: MembershipKeyPair
  # membershipIndex denotes the index of a leaf in the Merkle tree 
  # that contains the pk of the current peer
  # this index is used to retrieve the peer's authentication path
  membershipIndex*: MembershipIndex 
  membershipContractAddress*: Address
  ethClientAddress*: string
  ethAccountAddress*: Address
  # this field is required for signing transactions
  # TODO may need to erase this ethAccountPrivateKey when is not used
  # TODO may need to make ethAccountPrivateKey mandatory
  ethAccountPrivateKey*: Option[PrivateKey]
  rlnInstance*: RLN[Bn256]
  pubsubTopic*: string # the pubsub topic for which rln relay is mounted
  

# inputs of the membership contract constructor
# TODO may be able to make these constants private and put them inside the waku_rln_relay_utils
const 
  MEMBERSHIP_FEE* = 5.u256
  #  the current implementation of the rln lib only supports a circuit for Merkle tree with depth 32
  MERKLE_TREE_DEPTH* = 20
  # TODO the ETH_CLIENT should be an input to the rln-relay, though hardcoded for now
  # the current address is the address of ganache-cli when run locally
  ETH_CLIENT* = "ws://localhost:8540/"

const 
  # the size of poseidon hash output in bits
  HASH_BIT_SIZE* = 256 
  # the size of poseidon hash output as the number hex digits
  HASH_HEX_SIZE* = int(HASH_BIT_SIZE/4)

# temporary variables to test waku-rln-relay performance in the static group mode
const
  STATIC_GROUP_SIZE* = 100
  #  STATIC_GROUP_KEYS is a static list of 100 membership keys in the form of (identity key, identity commitment) 
  #  keys are created locally, using createMembershipList proc from waku_rln_relay_utils module, and the results are hardcoded in here 
  #  this list is temporary and is created to test the performance of waku-rln-relay for the static groups
  #  in the later versions, this static hardcoded group will be replaced with a dynamic one
  STATIC_GROUP_KEYS* = @[("e9a4d05b1f539d65c59015a079ee89aabeafbcfc9734342d9559f81601e85417", "b74d3a5b3200ab1126fbee393496f33da497d4d9a7c56693f44d6155c0c34e13"), ("27b2bfc25257e53819beaf36ce1070007e04e7aad2e440a1f1fc066f59a61123", "522ce51aff96041e79a8476f508fb9661f146f189e288f83cb4837517cfc0127"), ("66392eaae6674267c55fe393d39443ba90317a709d6e8f92a9f3e4abc18eff1d", "e3dc235e48c1811943fc249fecd0f1415a50ebe839ccefb0bd820a76fb77ba2a"), ("e7462eebb81405230db8014b052d65fe7b269c3870e40b12cf64668ed6c2d40e", "727df0965e34144ea637be18208cc81e57e423010b3159c20f0ccff45c42212a"), ("1ad8528b4c7075013a2d6561a02517b0482c0733dc018ac68774db857deb5004", "5df3a77577135784da2a9ee78f5026092b7d6bb9e6e95882d6cb172c0cb62208"), ("aa0ff53bfc50861f871d94df18c3ac0b97f44ceb13436b33490cec5f6ce8e700", "30421d05b905aeaec0473ba29ace034bf73c406866d7dc23007eb9c34a596827"), ("0448c0a6ed57b177c4c45de478b58d29f24e7ea842814305443e87188ae24324", "5ea1a704d8972af5a028367c8e3fb48ee61a603c6ea3a4c9247b0f611a6ab002"), ("4b6a6edbdd11e69befe3f4a3c976baca320c4bcb188f129b603ebb198f663000", "451d6185e8ad2c8873f034683b9caca43ea7ceb1b839abd3e01c3f19f3e6bd1e"), ("c3fba34855b33f025696326d2980ddc3fb47d90459ed6a4488fbb2e4e12ccf2b", "74674a86144ea866ad8fe633e256783bda4a07b997cb412c53a5eaf4cc7b6a0e"), ("0c35b8b94a720f1c26d7c6241c9f3ea5332a87cf3730b25ef31b68854c10e405", "6915df8d8ad19ec17be37c299eed762f9b63e841cd7963e13e8db6890dba082d"), ("a60b021677da95ba46c8c3411ac77f3e3b06937a8d189517111c045880029909", "bbfcd22ecb44cec6fd0717cd0f21b26e6e8b2c91e1a6cb5d8610e2f2ad41c90f"), ("2f4d662e66fbe754b708b87ea3d75a01d2ea4d7bf33c615c2376211dcc3b560f", "c67f7e622c3293028b9f86571e82c49551eb5fd308a35eb663498cffac208810"), ("d90a1afa96c14c8d3b989a9cf23d6e8b9907da42724e44a3ac74ae015b6ce22e", "f0795b1bdd0a907252b6ab047642d97be076a16ea69d463f1a4bec00c817202e"), ("dfa0764d89c8da10777504e5274f1baccf8b4145deba72b26503474318fb6410", "9f8aa8e833ea2f13cccfb6d9f2f04fd7be9c9f3019540c05c1986b3bce254e25"), ("e17490013b6b53a40964ff1067b922d4d73521e32fe394527b39c1bfd4a5e712", "7a8fa23a0e4b14a36f2818a7d98639f6e4934c028da780a6cc658fbf76e80a26"), ("7a9328d1075373dddb1b1100e8217ffaa1f9b632911b95a8fdc08870b15a8410", "94b2ae70c046b94873098c19fe18e7b17db2d31fe6a7eb73fea8168395e3c122"), ("ce319bb1447da5bf51a88ab3379dbea539b5a431d3c4f131048cf7b05c52161d", "cdfa264ab8a51bbc9fff5732cf544bb06abba7e807a8c252a5f9ce785c6ff22c"), ("d3818503bfcbef9ca03fc4472be77cb4936a1720001fc5e54852f769448fd313", "e72792abd906976c75a5670de514894a720c5293cf74338a9c2987640a949c0b"), ("4f9b8d118460736eb62602d12d3aed62938d4d4374b8c88704cf40c415c0901e", "2ecbe4588ade31924a1053fe0204950a0b4924878b312e56b2d0522f92a5f01c"), ("39b59fd96adaf9633edcc8cef10049cddf5f7df8ac80af8aafa436d62ee7f905", "b94f7a979df8a95fc2766a9a96308ff39a14daf7b7d6bc48591d2ea4c764bf00"), ("73cb0d25995d182b361c8237852bafeab8bb951de99f730da2913a239400c322", "da04e6e4446b6bcd54667b741444d826abbc5b76572d28474dfa94db91144606"), ("2753423b83bba5bb8b2799bc58125c46fb03ec05e8579d772cdc6e75b0875009", "ee040010ec20e7293431a3692d06416f71162d176a316b0329a76edf6f3fb30d"), ("cb73ec9b67355ce6275b51144a0759de28bb9390aab20514ee49a3bd8ce5361b", "c7c6e2ad3efe1f03b398241bddb67b008dd5e8caf1a17db9c33d2e2388d58e0d"), ("bdb386d9f3fe5613ede926d80246682a5d32392f7f6c9d818a80d8e7a12e371b", "21d48c74f422ef72cb9db18799916b3c11d0cb99cec808563e2db22047840902"), ("60f2fcfe341034449046c1fa330f6aceff737a9837a7d6d3a4885f8afce4a809", "e4c8f26f9e4127511b5ab21f1705913d7beaa2767cb7d033564e36bd2693370c"), ("1223d64fb5c44921c1ae66d91543780634c2f7bae7e184e09c4e5447e6d1180b", "290ab84714fc3534c5ba22b2aa7696ac03ed12c9cf1c409a777bac05475ea406"), ("b79c593316c42280d316bb7f3b43c7a5f5e29786d1ca6c0424463470eefe2b2f", "f4e44ac9574c4d32ab403e71dd00554eee0d8e34d04611b66ab2e59c49bff025"), ("e6548f669ebe655cb6600432e1af14c43da7286e3620289b51cc947517db9c14", "ace261e3964a1dcb389a693f52104018cd475e6856ae37fe4892df9482954902"), ("81be54409c9364f4842209e0f79b190afd9df017cc9790e11196d4bf5108f100", "d986b22e422703e065f12b6fd608813028ff913d4ffeb54b19e6537456391b23"), ("940ff0d3b4549d1baf7ad900cf6aedde02833b777e39c411e6efe7bcdd2ef305", "d672bb8a6e75b47fdbb365de0516f3fa827b287c9666e64d1b6768e2c8949412"), ("b4fe300aa1c8c836b3cc4c167df86d08fb7213200b8d9f7ba7963170e6dc8c0a", "5f7db6a9867f3f5c9fd1955c02cf96056d1225be950cd432818f8f1c16152020"), ("2c34a2bdb3738cb78270207dcae40ae47178bf4216bd2044ba124ec49240522a", "8c490c78d7d735ab32493510cc2ec9c3742d3f47e46cfd754859e91271673e15"), ("fc03857a3ff92d17d40bf9bb9b99e01e85fe4c698450147dc74cde60b2e9fa2d", "c0a22acdababbc42bba5bc0245a2ef9f2c74b215663440aed37c8e0bd7e00809"), ("a267a96a35c63b03788e90bb9a440da9ac832b0be02537b6f0ecc928ea989223", "636ceacda5bce999ca303b7df32e9352af10083c6db6ed93c8a221efc385172d"), ("ce4e15a2c1667a9dac4c4732de6c91f8c523c449f8c9be6b895644460717a209", "d55c6523f40b36d2519b30292873bd469aeda6dbdbafe7c5fd405438dcc6bd12"), ("4c617cdea4e3cb008c396c59b701375409304d84cfa17fe9d6d91a15fa412306", "a6dc21a9c35418a39c69f2d8e9df738db0b36fecc44eddf364846b84c5362819"), ("8c33aa2b3d94f9b11cc62ed1a304b92be370384ebbbf67c886dcd6ce544cc806", "7caca2b1ab8c70b58ba36794a988fd6ec50c2a04dd09d7cd28e67ca1f1401d2c"), ("1b6fc8f4007e6cdcf89a496cf0e711b0a3bbdbbae66830450a9744f5c802a228", "c3b79478bd32feb99a0c92001efb97953efdad8c2338ed2ac14a313592c12418"), ("0c6837e83ee0f1b1e5fe31bdf0960aefa2162ef7de7c0c886df930839bd4db06", "8b2667b5151ab13f0f87fb014cd3ebb7ab1e92a528f00ebd91b514ea61b8f52b"), ("8da38060963597c34544d8b10432a2e34d8eada7d1479f4fa5e96dca32250c27", "7bf525115a8e6f772feb6d4db0f2a6b0d4233e0ff85e180c3249e18f0d08f42e"), ("50b0c6d85f6a9d11fc52f1fc9e43b778380bdf936ddfd293940c77e79bc8340d", "bbb9e297de81ef341e032484d7b33b29e7d9e3be1414feaf2bbc0957ba408811"), ("6e8fd3ad20cf32ff8ba6e4bd8d4f05f3cc20d88631cbd3aa5f7f98446d725108", "a9fe7404613b040412049a205301f2175b53d7012087047a8dc7501a381f5210"), ("c291bb32d69cfef7e80b6dadd2a1198d05ac23eb30be6503d1c4c04350de2028", "f44f8ca09d849551f72a6692c793319eefaa0c02d3301ae79c2f869f4251d422"), ("116d4c2e21101f819a87f0de31dec56a4649c9ad9e539b71680dd439b288681d", "9f4df65e05390be63bd6e3e38d8afb6117d5d357d56f35ecf63406096fdd810c"), ("1813ed3760299a16e623084a852de9b12caaf8138744f8903a357fa9a2dbb00c", "f37baacccd07bc489f50b851f807c88a425e41dd9dda8068e75cffb8bf653a0f"), ("545e62d72cbb89db1c17e7ad8bb0660a74f8bc411b16eb0452d9a2d7c3e5b01e", "96ddc93a86b091c7b1951d7371f80a352d85c38606e450aa2af272e8929fae19"), ("0f5d5941474697c21ea6aecc29ff7cadbd28dbf29531431a40aaea3b7acd1514", "e83d0ff3ab4db81fb19c1b6125d7d2e4a34a83a8d463049d06df4870dbb2a525"), ("52605bc1f48092f9d5ad4c2a840a60f129e6aef2eef9c92474951ed1e10e381c", "222df3afb8b20685c872f29ebfc7e4056fcdafe1d8a77a9f9ba08ac8f426190c"), ("eee8cdee57e9f11ad0174c1514bba4c3a2c2a10d099876195726217445462f0b", "a000e5799ac933154bae228c09b522c714fb9a57f530d1954947277be9db0a24"), ("8c7d04dc3916370f8186dcffc92ad482294ab49c9ce36a5bd13473dc7c4d491a", "788e35bcd82efbce15b3444f36330337ce3adb67bfc6329149cd25069ac9eb19"), ("004a720f9edabb7f82eb30a78da45aceccbca5eb69583e1e8018ec1359a61f27", "e3d319d64bea8069a649acd33859b22361da799e0296f3d4f5117e16feb18e16"), ("38716f1d7cde7e37795a5b2d6d6317eecbf0adc6dcf7dcc6ee02cc25d1efb22f", "95c229d0cfc1485f2be0a23de6e49601a2ea55652beead84a67cd727c21a1301"), ("22cac7a49e99f3d071812abb0addafa4bf9a65308769728e4cd53cc7486f6c13", "a2e5b90606809964bc20d776b9cbcaab93a2f25124998ae3bd698d061f7afd00"), ("5109c7a41f73baa4787358b72ff1095439602add7a86a034b87b74360ee2e20f", "a31b3e2033ed828b5a51b9428f8f6ea40267259df08fdcd2c0e34dd335bdf90c"), ("957a87470f29a135567085c3d6d6ed14885bab4eb659725534a45a9f100a471c", "8f3005df282d5a87fa33405e35a313233d05731e87cfcbe060fa067596fa3013"), ("e0dad57606c2b293dc7c841c965cb29736d2411003e9284a0ae94d13e3d03d2e", "0543643ef0b617030dcc292451ebcace8bad20706528cb6aedb98dcea66aba27"), ("f1f10938c8a55b6b15b3f12beebb702133401135937c5c3f2d7fba702f24da09", "dc862a8a5ad5107421d550731a7f561e4064878c3654bf88b230cc249e91091d"), ("4bbc08d78c9970235778d6bd9939c7b2b1bd88b9d1cde6473663ae96ae776911", "3584be9ce31a7fb3aae8515011f4d3eeb86a573b225a88577e4911050bc35013"), ("c8325b31c9295757ca23d8f5256eebc5ccc517d28e00bfda5f4d709441d66713", "b81f360903160485c470625519cb18219b44d8b740273ef742fefc5653daf009"), ("69a6b3e22fbe5879efa56cdb5d50605732bf7f311e28ba037916b4db61ae8a14", "10ddf800eb3e67da20575456150cb1f0d49506d97ed4ef2d91b951af48966924"), ("c2a0e3586d4bb49f2ef979686c3a9a1619d0d54ac89641d592b4628b19dee401", "bc3ba677f6d13ef9f023d4a3b9f073c3eea910ef90cfd24b7f54414d2d02d315"), ("5b89051b79ff37457760d7af2ebc68be955e47eb6cdf306fbd369dc19fc52c05", "7bfe2a9d5bb2ade0f9058ea27a07c867af21670d2b9e84bdcc8967d4cdc4ba11"), ("46ac45f35cbc23bf68906933ad29240054a0a1d89c1832ebb54aa1bc32644105", "e891e783d5615a1b8ab838f68f6f2ce4e359510ddd40882d4650327d08a5bd11"), ("581e067b37c40caf861c190922f816e6cb850540df7ceb159f96c48c1c70cd23", "0d49fa8c74202369c36f4121eab0aa3ac9206ad3419fc9517a88493b07d6fb25"), ("bb7eb4ba2b45a22e14fad963c04eadbe8e7aab6ff912b008c9e7dd2a2c7d3615", "758ed0c8cef51f82508072fa758265f0f0eef6c7b2401b94ebe27a638ce33125"), ("a08f3cc9904f672b94d1f5a14dedbdef4ed229da5b66eca0135090d6f0ba0728", "542c952395d241cfa15bd48922e9c7fc292dbdd120daa3d66dad67fb3abb700a"), ("105bac5c449441bd5f5cf39b431f703e2e8f6a30a90d86cfdf425ec728fdbd08", "b59206f1d556fb98329a7111e3c89bf1e6a4861ec38c82eafa81cff70b713e0d"), ("45df2edfaea234dab99efa9a402c0d2feaa841ff3c990c926473173283d95913", "db008cf922c3a50549373a14f5f18b2dc827bd6e168402dfe3e6ece4cb137527"), ("488dd6437c15ef5b85e84407b7e599cc078c195ed2fc27b366ddac7739f1eb14", "0448887f55c677464e7e540adf107ba10fc6713e8a2718fe92cbd4794ef4be17"), ("3fe697698f3504e15eb5d509efa91624d9aa4eae24beeb42ffcb3c6ea8372a30", "441ccb28e7c6c1893a58f7513c9b7c1c5d0adf3de452644a837d7e08e1ab8117"), ("9bb5801272264c74db75f1c6812747bf338ea6880fa4dd2d51ef651ef73c2e04", "e2eefd80e838c30b3f1fb0313fcfcb1e1556439d0346d17334df83c33247b20e"), ("bad37a1467c4fe875b78508656f2816414ef602ae2ccd4e9430d94ca5c1cd911", "21c72ccdbaed2e3ea9dac3881531467b64c9322199127f2ae2fa4bb31bad591d"), ("95c72237ccbaedc185b1abfc59059c454175df81bb3ff65e5a61e2cb5263ed0d", "1040728a4775ac5cf7a9c75dda2f0aee1fabd6b202b5e916636e3aec73a09d0d"), ("738e8b9af4d199bc95f70b2a9b25e999b39af15c6a02f2eca058326078745f2a", "004835960aa03e101d818907df453cefdfb910b44ad9bd056a83b2ef40a5ca0d"), ("0d88caf486f2fe60bfc08697d1b617b586ec880e38e4ff56f145a5db0ab6d12e", "a7b19323815295bc84c50535b62c3d4d53dbfc434441eb3c009568fb8f7b2b1a"), ("b37af7fd314d90590fba8ebf730397cfdaa97f86d3f31d1a7ddc817ff303791f", "8296a80eceae97f92784642da34f121e29db2c5f3baf9a2722896db22e98b703"), ("6b67dd3051a8cb113431f5a14e279d910b7b4798ccb03ff588cf312ffe366a0b", "9c38cc543a0b793be4a0d66de3b2cd30b1f33d36c4402a165da924d7e6f89a12"), ("72fc4c40e406b9d1b34daba614460922fc53951abd6db5834e1f1b07fa319f27", "daa4d50481ba47c4a78ae3848a9b268b1d8e0579b4967ebcdece47d386410d02"), ("a4ce5cb2b2a23dcf019f275058a4092901c4793e6ee7d29282e755dd0d0df000", "00749453d23051f3587911c34d52e2c2d093273d2283cd6dfba94d7a89cdb226"), ("9e00df0216e8ac8e72abfeab1106373a13699714c691f04a549f6b58ea974521", "0e69dbfd9023b8bb58ce7e17972d7c94d49e8464f9c22161d7564ed32c53ef27"), ("fe1a558c6315f425fea7c04dcf6db869acd7b62b1b848200d5709e73d53de71b", "66cd33cc8d61cb807092d76ac0e506014fc55624a39ee2afa67f9ba58eb21022"), ("3ca542e17e4cbc74f47afb399b12295d15dfbae5e966509b7e6cae2df61a430a", "57a0df429ed3720dee61ca720a4617243b41472f0c7766cc7ce625afddb3b41b"), ("c1a77855e9b0b1f7381c9acd69ff68fdfa65f1f753dcea22de5a28ed088c2b2e", "4fce521d725abb8a30d8c39a2a22f496b374d8512b7a76afd3803f7200c86d19"), ("17cda8d590adf3042bbf1452fe3d79b959f284f3df1e15ee3c696286f0ba832e", "8919e92a175b55003379ca6e546a04228aa9da861a9669e0e9b106e4a204d404"), ("959fa9337b4b479ce5fcff7ff9096a344acf7fcde2f8852e28904236472f2f02", "79e688ecfece239223b745e4b95460bfcb02aee12b154e15db616fda857dcd06"), ("d062d34cbdfbc50004a631e3dd8f21b446673b53830aa71fdcbc741e7d4fb31c", "2203af0127657f4e8a1c5ec44bb25028e64ad388efd0b9bfe2105f4f3ff66d0f"), ("d2d3e3034864944914709549ce27068b5f27bd18b0edc940593df2dc5c5dae23", "5ae75206bfdc8f54a8673d5d4c4b464ba1e84ae2410418b5c5e98fa993608113"), ("4ab457d6478fb27214345f0bc2e00cbb29cd55bed1f8e05c23b8f7810e134a1f", "3db37711e355ed46ea81bb6e31ae87b37b706a8d17e2aa976c7c7706c8e18d19"), ("5aa17884c96ecdaf81e2b343dbf051e4ace41935e53378ac10a4387e2cb0c404", "7118986268a748881f6144fc1008e90b40afc702be53784ed4cbceb8606e0714"), ("82f4ca6b751ac067e451ae1d5115806e7a1d14ab444084a8ac48046b88b43b30", "8a09186c2a5cb0f16e273be6a8710620006a77afe7c54149bea3dce906345a02"), ("55d5d97de81e0cc4d2ac97e507d4d6d9874cb55e1522b89ed2050ff3c20a4912", "27facefe4e2041e11a21889205af6c11eba73e3e8779b801bf3f7253730f1d04"), ("845177f4584f61071ddea21e9a6c0a17e1a9408e0c073047c339498ff383c109", "25bc572d1c861fe80156c2fd440e7d9110be8252723d276e806dcc012f8da103"), ("ecec46dfdaf45f49f82ee78fd9c8c747c049de9becaf440f90391c04dd119002", "b922e1a7caf72db69dcc062424c7ce75728d010c4c201c2ed8e635a617c81a1f"), ("8e265fd9f2a4b158a5eb4bda000a6124af909e118b7510f0ec418559aad85825", "aed92a21e9933bd2ce6c9f09bb7753b46ea31248b324c12726cff08e464bdd0c"), ("99d7181572d3ae637a277dcc0c35b9b98bbb6ecf3cdcc69af3e946a5bfeb520f", "89217b554371a2495ee473f867b2e26ea70d4245aceb462a98dd31a37d2d5330"), ("a5e1fd149ae27f34e7902ebf380277c0b7f09f37e8809d25a0b8df2965d24e29", "2d6a16a254cfc3894d5500f8c40feb1e84876bc51c68c381109e83f001b41c2f"), ("7fd221da235bb6e5fd0ae047f1aa49615ddbeecfb71ccb976bf3e0534425661c", "9ea41ccc3e09572927b0d9f618e1135d384f33618b6a0f80002f0a70be5eb324"), ("b125c1b45daa68f96be6a5b3e4dd24e4a0e49e46226d841eb73754a498c43b21", "360b9c39d25451ae58cf651c530155f91e324292b55475a92506de726f153c18"), ("d64536234849ababefa90b84f7b7cacf4b073809aa9b0c35581426521f18d81a", "d2dae030312cd4325bb036aa3436b26b9bed69b4d78d68bd49dbdde3173f1510"), ("d1ce3aea6cfb7be132d17e8d76fcbe4b7e34cef3979b4b905acfeff2f6d19724", "be47b76297791f535f4b56f973a19f07ec22d4eede2a41ff23c696089938bb21")]

  # STATIC_GROUP_MERKLE_ROOT is the root of the Merkle tree constructed from the STATIC_GROUP_KEYS above
  # only identity commitments are used for the Merkle tree construction
  # the root is created locally, using createMembershipList proc from waku_rln_relay_utils module, and the result is hardcoded in here 
  STATIC_GROUP_MERKLE_ROOT* = "a1877a553eff12e1b21632a0545a916a5c5b8060ad7cc6c69956741134397b2d"  

# Protobufs enc and init

proc init*(T: type RateLimitProof, buffer: seq[byte]): ProtoResult[T] =
  var nsp: RateLimitProof
  let pb = initProtoBuffer(buffer)

  var proof: seq[byte]
  discard ? pb.getField(1, proof)
  discard nsp.proof.copyFrom(proof)

  var merkleRoot: seq[byte]
  discard ? pb.getField(2, merkleRoot)
  discard nsp.merkleRoot.copyFrom(merkleRoot)

  var epoch: seq[byte]
  discard ? pb.getField(3, epoch)
  discard nsp.epoch.copyFrom(epoch)

  var shareX: seq[byte]
  discard ? pb.getField(4, shareX)
  discard nsp.shareX.copyFrom(shareX)

  var shareY: seq[byte]
  discard ? pb.getField(5, shareY)
  discard nsp.shareY.copyFrom(shareY)

  var nullifier: seq[byte]
  discard ? pb.getField(6, nullifier)
  discard nsp.nullifier.copyFrom(nullifier)

  return ok(nsp) 

proc encode*(nsp: RateLimitProof): ProtoBuffer = 
  var output = initProtoBuffer()

  output.write(1, nsp.proof)
  output.write(2, nsp.merkleRoot)
  output.write(3, nsp.epoch)
  output.write(4, nsp.shareX)
  output.write(5, nsp.shareY)
  output.write(6, nsp.nullifier)

  return output