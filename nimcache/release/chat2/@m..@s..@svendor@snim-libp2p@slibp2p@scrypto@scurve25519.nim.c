/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -pthread -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace/install/usr/include -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1/src -DHAVE_CONFIG_H -DHAVE_BUILTIN_EXPECT -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/src -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/inc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/tools -DBR_USE_UNIX_TIME=1 -DBR_USE_URANDOM=1 -DBR_LE_UNALIGNED=1 -DBR_64=1  -DBR_amd64=1 -DBR_INT128=1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/miniupnp/miniupnpc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/libnatpmp-upstream -DENABLE_STRNATPMPERR -march=native -g3 -Og -O3 -fno-strict-aliasing -fno-ident  -I/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib -I/home/runner/work/nim-waku/nim-waku/examples/v2 -o nimcache/release/chat2/@m..@s..@svendor@snim-libp2p@slibp2p@scrypto@scurve25519.nim.c.o nimcache/release/chat2/@m..@s..@svendor@snim-libp2p@slibp2p@scrypto@scurve25519.nim.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include "bearssl_ec.h"
#include "bearssl_rand.h"
#include "bearssl_hash.h"
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct tySequence__6H5Oh5UUvVCLiakt9aTwtUQ tySequence__6H5Oh5UUvVCLiakt9aTwtUQ;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
struct TGenericSeq {NI len;
NI reserved;
};
typedef NU8 tyArray__vEOa9c5qaE9ajWxR5R4zwfQg[32];
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {NI size;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
NCSTRING name;
TNimType* nextType;
NI instances;
NI sizes;
};
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef unsigned char tyArray__A1SHJCPZVISPTujoygIPEQ[64];
struct NimStringDesc {  TGenericSeq Sup;NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_CDECL_PTR(unsigned char*, tyProc__RsQCUDkcFU21gYyx1MQoag) (int curve_0, NI* len_0);
typedef N_CDECL_PTR(NI, tyProc__2OHt7ggxoJzA8VYxj1IhNw) (int curve_0, NI* len_0);
typedef N_CDECL_PTR(NU32, tyProc__pzE688NyvZUoJzv9c4TeD5g) (unsigned char* g, NI glen, unsigned char* x_0, NI xlen_0, int curve_0);
typedef N_CDECL_PTR(NI, tyProc__kqSrq59bmV4RJ6UmQwOrn2g) (unsigned char* r, unsigned char* x_0, NI xlen_0, int curve_0);
typedef N_CDECL_PTR(NU32, tyProc__uplriG9a1p3SVKDigTAcMTQ) (unsigned char* a, unsigned char* b, NI len_0, unsigned char* x_0, NI xlen_0, unsigned char* y_0, NI ylen, int curve_0);
typedef N_CDECL_PTR(void, tyProc__3qI9bVHqiq07sTQRU9bkkkYQ) (br_prng_class** ctx, void* params, void* seed, NI seedLen);
typedef N_CDECL_PTR(void, tyProc__hquUwNr88w4T5ldt8BqLLQ) (br_prng_class** ctx, void* out_0, NI len_0);
typedef N_CDECL_PTR(void, tyProc__bF2JFxTs1q6Lq365NU79a2Q) (br_hash_class** ctx);
typedef N_CDECL_PTR(void, tyProc__Dc9br5a6SHw9cxie3cas0KTA) (br_hash_class** ctx, void* data_0, NI len_0);
typedef N_CDECL_PTR(void, tyProc__JETfgzvEnx6Tz9bYRct9a51g) (br_hash_class** ctx, void* dst);
typedef N_CDECL_PTR(NU64, tyProc__e9bd9aJH2sCZh75q9aAcv7ylg) (br_hash_class** ctx, void* dst);
typedef N_CDECL_PTR(void, tyProc__g9c2vH2tlPaPmvfTZ3PeWQQ) (br_hash_class** ctx, void* stb, NU64 count_0);
struct tySequence__6H5Oh5UUvVCLiakt9aTwtUQ {  TGenericSeq Sup;  NU8 data[SEQ_DECL_SIZE];};N_LIB_PRIVATE N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A)(NimStringDesc* msg);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NOINLINE(void, chckNil)(void* p);
N_LIB_PRIVATE N_NIMCALL(void, mulgen__SuS0drMqREh4vM9ayU5Dkgw)(NU8* dst, tyArray__vEOa9c5qaE9ajWxR5R4zwfQg point);
static N_INLINE(void, byteswap__gGNEhVg3e71b9csiUlPY72Acurve25519)(NU8* buf_0);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
extern TNimType NTI__6H5Oh5UUvVCLiakt9aTwtUQ_;
STRING_LITERAL(TM__hPA9cMuFqA5I9c4gz59c6Cz9bQ_2, "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/cr"
"ypto/curve25519.nim(89, 12) `len == Curve25519KeySize` Could not"
" generate curve", 142);
STRING_LITERAL(TM__hPA9cMuFqA5I9c4gz59c6Cz9bQ_6, "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/cr"
"ypto/curve25519.nim(77, 10) `size == Curve25519KeySize` ", 119);
STRING_LITERAL(TM__hPA9cMuFqA5I9c4gz59c6Cz9bQ_7, "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/cr"
"ypto/curve25519.nim(61, 10) `res == 1` ", 102);

#line 38 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"
N_LIB_PRIVATE N_NIMCALL(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ*, getBytes__OIu3ct6Iv4pd9cGG09c9cCFKQ)(tyArray__vEOa9c5qaE9ajWxR5R4zwfQg key_0) {	tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* result;	NI T1_;	result = (tySequence__6H5Oh5UUvVCLiakt9aTwtUQ*)0;
#line 38 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"

#line 38 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"
	result = (tySequence__6H5Oh5UUvVCLiakt9aTwtUQ*) newSeq((&NTI__6H5Oh5UUvVCLiakt9aTwtUQ_), 32);	T1_ = (NI)0;	for (T1_ = 0; T1_ < 32; T1_++) {	result->data[T1_] = key_0[T1_];	}
	return result;}

#line 22 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/memory.nim"
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {	void* T1_;
#line 24 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/memory.nim"

#line 24 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/memory.nim"
	T1_ = (void*)0;	T1_ = memset(a, v, ((size_t) (size)));}

#line 33 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/memory.nim"
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
#line 34 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/memory.nim"

#line 34 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/memory.nim"
	nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
}

#line 11 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/memory.nim"
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {	void* T1_;
#line 13 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/memory.nim"

#line 13 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/memory.nim"
	T1_ = (void*)0;	T1_ = memcpy(dest, source, ((size_t) (size)));}

#line 82 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"
N_LIB_PRIVATE N_NIMCALL(void, random__UvoqRnqrR9b9cpFTFwPYNjww)(br_hmac_drbg_context* rng_0, tyArray__vEOa9c5qaE9ajWxR5R4zwfQg Result) {	tyArray__vEOa9c5qaE9ajWxR5R4zwfQg res;	br_ec_impl* defaultBrEc;	NI len_1;
#line 83 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"
	nimZeroMem((void*)res, sizeof(tyArray__vEOa9c5qaE9ajWxR5R4zwfQg));
#line 84 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"

#line 84 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"
	defaultBrEc = br_ec_get_default();
#line 85 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"

#line 85 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"
	len_1 = br_ec_keygen(&(*rng_0).vtable, defaultBrEc, NIM_NIL, (&res[(((NI) 0))- 0]), ((int) 29));
#line 89 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"
	{
#line 89 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"

#line 89 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"
		if (!!((len_1 == ((NI) 32)))) goto LA3_;

#line 89 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"

#line 89 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"
		failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__hPA9cMuFqA5I9c4gz59c6Cz9bQ_2));
	}
	LA3_: ;
	nimCopyMem((void*)Result, (NIM_CONST void*)res, sizeof(tyArray__vEOa9c5qaE9ajWxR5R4zwfQg));}

#line 40 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"
static N_INLINE(void, byteswap__gGNEhVg3e71b9csiUlPY72Acurve25519)(NU8* buf_0) {	{		NI i;		NI i_2;		i = (NI)0;
#line 106 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/iterators_1.nim"
		i_2 = ((NI) 0);		{
#line 107 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/iterators_1.nim"
			while (1) {				NU8 x_1;				NI TM__hPA9cMuFqA5I9c4gz59c6Cz9bQ_3;				NI TM__hPA9cMuFqA5I9c4gz59c6Cz9bQ_4;				NI TM__hPA9cMuFqA5I9c4gz59c6Cz9bQ_5;
#line 107 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/iterators_1.nim"
				if (!(i_2 < ((NI) 16))) goto LA3;

#line 41 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"
				i = i_2;
#line 43 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"
				if ((NU)(i) > (NU)(31)){ raiseIndexError2(i, 31); }				x_1 = buf_0[(i)- 0];				if ((NU)(i) > (NU)(31)){ raiseIndexError2(i, 31); }
#line 44 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"

#line 44 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"
				if (nimSubInt(((NI) 31), i, &TM__hPA9cMuFqA5I9c4gz59c6Cz9bQ_3)) { raiseOverflow(); };				if ((NU)((NI)(TM__hPA9cMuFqA5I9c4gz59c6Cz9bQ_3)) > (NU)(31)){ raiseIndexError2((NI)(TM__hPA9cMuFqA5I9c4gz59c6Cz9bQ_3), 31); }				buf_0[(i)- 0] = buf_0[((NI)(TM__hPA9cMuFqA5I9c4gz59c6Cz9bQ_3))- 0];
#line 45 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"
				if (nimSubInt(((NI) 31), i, &TM__hPA9cMuFqA5I9c4gz59c6Cz9bQ_4)) { raiseOverflow(); };				if ((NU)((NI)(TM__hPA9cMuFqA5I9c4gz59c6Cz9bQ_4)) > (NU)(31)){ raiseIndexError2((NI)(TM__hPA9cMuFqA5I9c4gz59c6Cz9bQ_4), 31); }
#line 45 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"
				buf_0[((NI)(TM__hPA9cMuFqA5I9c4gz59c6Cz9bQ_4))- 0] = x_1;
#line 109 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/iterators_1.nim"
				if (nimAddInt(i_2, ((NI) 1), &TM__hPA9cMuFqA5I9c4gz59c6Cz9bQ_5)) { raiseOverflow(); };				i_2 = (NI)(TM__hPA9cMuFqA5I9c4gz59c6Cz9bQ_5);			} LA3: ;
		}
	}
}

#line 63 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"
N_LIB_PRIVATE N_NIMCALL(void, mulgen__SuS0drMqREh4vM9ayU5Dkgw)(NU8* dst, tyArray__vEOa9c5qaE9ajWxR5R4zwfQg point) {	br_ec_impl* defaultBrEc;	tyArray__vEOa9c5qaE9ajWxR5R4zwfQg rpoint;	NI size;
#line 64 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"

#line 64 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"
	defaultBrEc = br_ec_get_default();	nimZeroMem((void*)rpoint, sizeof(tyArray__vEOa9c5qaE9ajWxR5R4zwfQg));
#line 67 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"
	nimCopyMem((void*)rpoint, (NIM_CONST void*)point, sizeof(tyArray__vEOa9c5qaE9ajWxR5R4zwfQg));
#line 68 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"

#line 68 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"
	byteswap__gGNEhVg3e71b9csiUlPY72Acurve25519(rpoint);

#line 71 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"

#line 71 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"
	size = (*defaultBrEc).mulgen(((unsigned char*) ((&dst[(((NI) 0))- 0]))), ((unsigned char*) ((&rpoint[(((NI) 0))- 0]))), ((NI) 32), ((int) 29));
#line 77 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"
	{
#line 77 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"

#line 77 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"
		if (!!((size == ((NI) 32)))) goto LA3_;

#line 77 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"

#line 77 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"
		failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__hPA9cMuFqA5I9c4gz59c6Cz9bQ_6));
	}
	LA3_: ;
}

#line 79 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"
N_LIB_PRIVATE N_NIMCALL(void, public__m9ciw2UsJ1wFFqS9ara6o9bLQ)(tyArray__vEOa9c5qaE9ajWxR5R4zwfQg private_0, tyArray__vEOa9c5qaE9ajWxR5R4zwfQg Result) {	chckNil((void*)Result);	nimZeroMem((void*)Result, sizeof(tyArray__vEOa9c5qaE9ajWxR5R4zwfQg));
#line 80 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"

#line 80 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"
	mulgen__SuS0drMqREh4vM9ayU5Dkgw(Result, private_0);
}

#line 47 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"
N_LIB_PRIVATE N_NIMCALL(void, mul__hLDEFWBpnhfm4tQ3LkfzuQ)(NU8* point, tyArray__vEOa9c5qaE9ajWxR5R4zwfQg multiplier) {	br_ec_impl* defaultBrEc;	tyArray__vEOa9c5qaE9ajWxR5R4zwfQg multiplierBs;	NU32 res;
#line 48 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"

#line 48 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"
	defaultBrEc = br_ec_get_default();	nimZeroMem((void*)multiplierBs, sizeof(tyArray__vEOa9c5qaE9ajWxR5R4zwfQg));
#line 52 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"
	nimCopyMem((void*)multiplierBs, (NIM_CONST void*)multiplier, sizeof(tyArray__vEOa9c5qaE9ajWxR5R4zwfQg));
#line 53 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"

#line 53 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"
	byteswap__gGNEhVg3e71b9csiUlPY72Acurve25519(multiplierBs);

#line 55 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"

#line 55 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"
	res = (*defaultBrEc).mul(((unsigned char*) ((&point[(((NI) 0))- 0]))), ((NI) 32), ((unsigned char*) ((&multiplierBs[(((NI) 0))- 0]))), ((NI) 32), ((int) 29));
#line 61 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"
	{
#line 61 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"

#line 61 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"
		if (!!((res == ((NU32) 1)))) goto LA3_;

#line 61 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"

#line 61 "/home/runner/work/nim-waku/nim-waku/vendor/nim-libp2p/libp2p/crypto/curve25519.nim"
		failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__hPA9cMuFqA5I9c4gz59c6Cz9bQ_7));
	}
	LA3_: ;
}