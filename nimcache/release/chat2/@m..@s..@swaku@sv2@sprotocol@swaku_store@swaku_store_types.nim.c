/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -pthread -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace/install/usr/include -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1/src -DHAVE_CONFIG_H -DHAVE_BUILTIN_EXPECT -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/src -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/inc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/tools -DBR_USE_UNIX_TIME=1 -DBR_USE_URANDOM=1 -DBR_LE_UNALIGNED=1 -DBR_64=1  -DBR_amd64=1 -DBR_INT128=1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/miniupnp/miniupnpc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/libnatpmp-upstream -DENABLE_STRNATPMPERR -march=native -g3 -Og -O3 -fno-strict-aliasing -fno-ident  -I/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib -I/home/runner/work/nim-waku/nim-waku/examples/v2 -o nimcache/release/chat2/@m..@s..@swaku@sv2@sprotocol@swaku_store@swaku_store_types.nim.c.o nimcache/release/chat2/@m..@s..@swaku@sv2@sprotocol@swaku_store@swaku_store_types.nim.c */
#define NIM_INTBITS 64

#include "nimbase.h"
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
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_WakuStorecolonObjectType___bTNJy9bbtN9aNYuADEgXa2nw tyObject_WakuStorecolonObjectType___bTNJy9bbtN9aNYuADEgXa2nw;
typedef struct tyObject_LPProtocolcolonObjectType___5aL02d9bjOYDZmYD0dWxn2w tyObject_LPProtocolcolonObjectType___5aL02d9bjOYDZmYD0dWxn2w;
typedef struct RootObj RootObj;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tyObject_FuturecolonObjectType___GXFSekg1U8JRoedGa2vBSA tyObject_FuturecolonObjectType___GXFSekg1U8JRoedGa2vBSA;
typedef struct tyObject_ConnectioncolonObjectType___crfbBHXu3U647CckYkg9cYg tyObject_ConnectioncolonObjectType___crfbBHXu3U647CckYkg9cYg;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_PeerManagercolonObjectType___EXZUwC4ltfxJCp69c4oOLbA tyObject_PeerManagercolonObjectType___EXZUwC4ltfxJCp69c4oOLbA;
typedef struct tySequence__8d9bxJ1229c513mLE0NixLcQ tySequence__8d9bxJ1229c513mLE0NixLcQ;
typedef struct tyObject_MessageStorecolonObjectType___bg6yGWOWyOtBXK9b9b6blzKA tyObject_MessageStorecolonObjectType___bg6yGWOWyOtBXK9b9b6blzKA;
typedef struct tyObject_WakuSwapcolonObjectType___OgMzNUCr6xORWthoJfb2nw tyObject_WakuSwapcolonObjectType___OgMzNUCr6xORWthoJfb2nw;
typedef struct tyObject_IndexedWakuMessage__9cl9a9a4SOJOfbd2cZp8afXXw tyObject_IndexedWakuMessage__9cl9a9a4SOJOfbd2cZp8afXXw;
typedef struct tyObject_WakuMessage__snKUdUhXg9ahkzpl1ubVZ0A tyObject_WakuMessage__snKUdUhXg9ahkzpl1ubVZ0A;
typedef struct tySequence__6H5Oh5UUvVCLiakt9aTwtUQ tySequence__6H5Oh5UUvVCLiakt9aTwtUQ;
typedef struct tyObject_Index__lOZ7xaSDQuG6u4WFzCveFQ tyObject_Index__lOZ7xaSDQuG6u4WFzCveFQ;
typedef struct tyObject_MDigest__law9ct65KplMYBvtmjCQxbw tyObject_MDigest__law9ct65KplMYBvtmjCQxbw;
typedef struct tyObject_HistoryRPC__EGNx42PC7VqGsUjKX6TR9aw tyObject_HistoryRPC__EGNx42PC7VqGsUjKX6TR9aw;
typedef struct tyObject_HistoryQuery__jSwvWt3Wmw2bDE9c0nMvYhg tyObject_HistoryQuery__jSwvWt3Wmw2bDE9c0nMvYhg;
typedef struct tySequence__9bAGqSvkAaFL9bWjsEPslrFA tySequence__9bAGqSvkAaFL9bWjsEPslrFA;
typedef struct tyObject_PagingInfo__yiZv2G0tYZKnn39bYV9bE71A tyObject_PagingInfo__yiZv2G0tYZKnn39bYV9bE71A;
typedef struct tyObject_HistoryResponse__xDg0UAKGB8XrRjSUqHlWFw tyObject_HistoryResponse__xDg0UAKGB8XrRjSUqHlWFw;
typedef struct tySequence__CP6AbN9aoC6Xupc2HZLYt1w tySequence__CP6AbN9aoC6Xupc2HZLYt1w;
typedef struct tyTuple__JfHvHzMrhKkWAUvQKe0i1A tyTuple__JfHvHzMrhKkWAUvQKe0i1A;
typedef struct tyObject_Env_waku_store_typesdotnim___diB2NTuAIWY0FO9c5IUJRGg tyObject_Env_waku_store_typesdotnim___diB2NTuAIWY0FO9c5IUJRGg;
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
struct RootObj {TNimType* m_type;};
struct TGenericSeq {NI len;
NI reserved;
};
struct NimStringDesc {  TGenericSeq Sup;NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef struct {
N_NIMCALL_PTR(tyObject_FuturecolonObjectType___GXFSekg1U8JRoedGa2vBSA*, ClP_0) (tyObject_ConnectioncolonObjectType___crfbBHXu3U647CckYkg9cYg* conn, NimStringDesc* proto, void* ClE_0);
void* ClE_0;
} tyProc__Sx7TcXJiI2BS08wYpfOyIg;
struct tyObject_LPProtocolcolonObjectType___5aL02d9bjOYDZmYD0dWxn2w {  RootObj Sup;tySequence__sM4lkSb7zS6F7OVMvW9cffQ* codecs;
tyProc__Sx7TcXJiI2BS08wYpfOyIg handler;
};
struct tyObject_WakuStorecolonObjectType___bTNJy9bbtN9aNYuADEgXa2nw {  tyObject_LPProtocolcolonObjectType___5aL02d9bjOYDZmYD0dWxn2w Sup;tyObject_PeerManagercolonObjectType___EXZUwC4ltfxJCp69c4oOLbA* peerManager;
br_hmac_drbg_context* rng;
tySequence__8d9bxJ1229c513mLE0NixLcQ* messages;
tyObject_MessageStorecolonObjectType___bg6yGWOWyOtBXK9b9b6blzKA* store;
tyObject_WakuSwapcolonObjectType___OgMzNUCr6xORWthoJfb2nw* wakuSwap;
};
struct tyObject_WakuMessage__snKUdUhXg9ahkzpl1ubVZ0A {tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* payload;
NU32 contentTopic;
NU32 version;
};
typedef NU8 tyArray__vEOa9c5qaE9ajWxR5R4zwfQg[32];
struct tyObject_MDigest__law9ct65KplMYBvtmjCQxbw {tyArray__vEOa9c5qaE9ajWxR5R4zwfQg data;
};
struct tyObject_Index__lOZ7xaSDQuG6u4WFzCveFQ {tyObject_MDigest__law9ct65KplMYBvtmjCQxbw digest;
NF receivedTime;
};
struct tyObject_IndexedWakuMessage__9cl9a9a4SOJOfbd2cZp8afXXw {tyObject_WakuMessage__snKUdUhXg9ahkzpl1ubVZ0A msg;
tyObject_Index__lOZ7xaSDQuG6u4WFzCveFQ index;
};
typedef NU8 tyEnum_PagingDirection__9clPRC2FpWxGkQQzKVE9a3Lw;
struct tyObject_PagingInfo__yiZv2G0tYZKnn39bYV9bE71A {NU64 pageSize;
tyObject_Index__lOZ7xaSDQuG6u4WFzCveFQ cursor;
tyEnum_PagingDirection__9clPRC2FpWxGkQQzKVE9a3Lw direction;
};
struct tyObject_HistoryQuery__jSwvWt3Wmw2bDE9c0nMvYhg {tySequence__9bAGqSvkAaFL9bWjsEPslrFA* topics;
tyObject_PagingInfo__yiZv2G0tYZKnn39bYV9bE71A pagingInfo;
};
struct tyObject_HistoryResponse__xDg0UAKGB8XrRjSUqHlWFw {tySequence__CP6AbN9aoC6Xupc2HZLYt1w* messages;
tyObject_PagingInfo__yiZv2G0tYZKnn39bYV9bE71A pagingInfo;
};
struct tyObject_HistoryRPC__EGNx42PC7VqGsUjKX6TR9aw {NimStringDesc* requestId;
tyObject_HistoryQuery__jSwvWt3Wmw2bDE9c0nMvYhg query;
tyObject_HistoryResponse__xDg0UAKGB8XrRjSUqHlWFw response;
};
struct tyTuple__JfHvHzMrhKkWAUvQKe0i1A {
void* Field0;
tyObject_Env_waku_store_typesdotnim___diB2NTuAIWY0FO9c5IUJRGg* Field1;
};
typedef unsigned char tyArray__A1SHJCPZVISPTujoygIPEQ[64];
typedef N_CDECL_PTR(void, tyProc__3qI9bVHqiq07sTQRU9bkkkYQ) (br_prng_class** ctx, void* params, void* seed, NI seedLen);
typedef N_CDECL_PTR(void, tyProc__hquUwNr88w4T5ldt8BqLLQ) (br_prng_class** ctx, void* out_0, NI len_0);
typedef N_CDECL_PTR(void, tyProc__bF2JFxTs1q6Lq365NU79a2Q) (br_hash_class** ctx);
typedef N_CDECL_PTR(void, tyProc__Dc9br5a6SHw9cxie3cas0KTA) (br_hash_class** ctx, void* data_0, NI len_0);
typedef N_CDECL_PTR(void, tyProc__JETfgzvEnx6Tz9bYRct9a51g) (br_hash_class** ctx, void* dst);
typedef N_CDECL_PTR(NU64, tyProc__e9bd9aJH2sCZh75q9aAcv7ylg) (br_hash_class** ctx, void* dst);
typedef N_CDECL_PTR(void, tyProc__g9c2vH2tlPaPmvfTZ3PeWQQ) (br_hash_class** ctx, void* stb, NU64 count_0);
struct tySequence__8d9bxJ1229c513mLE0NixLcQ {  TGenericSeq Sup;  tyObject_IndexedWakuMessage__9cl9a9a4SOJOfbd2cZp8afXXw data[SEQ_DECL_SIZE];};struct tySequence__CP6AbN9aoC6Xupc2HZLYt1w {  TGenericSeq Sup;  tyObject_WakuMessage__snKUdUhXg9ahkzpl1ubVZ0A data[SEQ_DECL_SIZE];};struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {  TGenericSeq Sup;  NimStringDesc* data[SEQ_DECL_SIZE];};struct tySequence__6H5Oh5UUvVCLiakt9aTwtUQ {  TGenericSeq Sup;  NU8 data[SEQ_DECL_SIZE];};struct tySequence__9bAGqSvkAaFL9bWjsEPslrFA {  TGenericSeq Sup;  NU32 data[SEQ_DECL_SIZE];};N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tySequence__8d9bxJ1229c513mLE0NixLcQ)(void* p, NI op);
static N_NIMCALL(void, Marker_tyRef__BgTPnf6H2o8WKrA35mWtRw)(void* p, NI op);
static N_NIMCALL(void, Marker_tySequence__CP6AbN9aoC6Xupc2HZLYt1w)(void* p, NI op);
extern TNimType NTI__5aL02d9bjOYDZmYD0dWxn2w_;
N_LIB_PRIVATE TNimType NTI__bTNJy9bbtN9aNYuADEgXa2nw_;
extern TNimType NTI__mAwL2D2EWMuWoFpTGy9aepg_;
extern TNimType NTI__RuNvFuo5ptASsihINNteSw_;
N_LIB_PRIVATE TNimType NTI__9cl9a9a4SOJOfbd2cZp8afXXw_;
extern TNimType NTI__snKUdUhXg9ahkzpl1ubVZ0A_;
extern TNimType NTI__lOZ7xaSDQuG6u4WFzCveFQ_;
N_LIB_PRIVATE TNimType NTI__8d9bxJ1229c513mLE0NixLcQ_;
extern TNimType NTI__bvxr3PSY2I1MO2BtoJ2ytw_;
extern TNimType NTI__dfpr1NaNhM4s3RSj4xSM4w_;
N_LIB_PRIVATE TNimType NTI__BgTPnf6H2o8WKrA35mWtRw_;
N_LIB_PRIVATE TNimType NTI__EGNx42PC7VqGsUjKX6TR9aw_;
extern TNimType NTI__77mFvmsOLKik79ci2hXkHEg_;
N_LIB_PRIVATE TNimType NTI__jSwvWt3Wmw2bDE9c0nMvYhg_;
extern TNimType NTI__9bAGqSvkAaFL9bWjsEPslrFA_;
N_LIB_PRIVATE TNimType NTI__yiZv2G0tYZKnn39bYV9bE71A_;
extern TNimType NTI__wMtfD88jmrPZwfzTH9c8e9cA_;
N_LIB_PRIVATE TNimType NTI__9clPRC2FpWxGkQQzKVE9a3Lw_;
N_LIB_PRIVATE TNimType NTI__xDg0UAKGB8XrRjSUqHlWFw_;
N_LIB_PRIVATE TNimType NTI__CP6AbN9aoC6Xupc2HZLYt1w_;
N_LIB_PRIVATE TNimType NTI__afTpDKuOJgODVx1JZPJ9awQ_;
extern TNimType NTI__vr5DoT1jILTGdRlYv1OYpw_;
extern TNimType NTI__HsJiUUcO9cHBdUCi0HwkSTA_;
extern TNimType* nimTypeRoot;
static N_NIMCALL(void, Marker_tySequence__8d9bxJ1229c513mLE0NixLcQ)(void* p, NI op) {
	tySequence__8d9bxJ1229c513mLE0NixLcQ* a;
	NI T1_;	NI T2_;	a = (tySequence__8d9bxJ1229c513mLE0NixLcQ*)p;
	T1_ = (NI)0;	for (T1_ = 0; T1_ < (a ? a->Sup.len : 0); T1_++) {
	nimGCvisit((void*)a->data[T1_].msg.payload, op);	T2_ = (NI)0;	}
}
static N_NIMCALL(void, Marker_tyRef__BgTPnf6H2o8WKrA35mWtRw)(void* p, NI op) {
	tyObject_WakuStorecolonObjectType___bTNJy9bbtN9aNYuADEgXa2nw* a;
	a = (tyObject_WakuStorecolonObjectType___bTNJy9bbtN9aNYuADEgXa2nw*)p;
	nimGCvisit((void*)(*a).Sup.codecs, op);	nimGCvisit((void*)(*a).Sup.handler.ClE_0, op);	nimGCvisit((void*)(*a).peerManager, op);	nimGCvisit((void*)(*a).rng, op);	nimGCvisit((void*)(*a).messages, op);	nimGCvisit((void*)(*a).store, op);	nimGCvisit((void*)(*a).wakuSwap, op);}
static N_NIMCALL(void, Marker_tySequence__CP6AbN9aoC6Xupc2HZLYt1w)(void* p, NI op) {
	tySequence__CP6AbN9aoC6Xupc2HZLYt1w* a;
	NI T1_;	a = (tySequence__CP6AbN9aoC6Xupc2HZLYt1w*)p;
	T1_ = (NI)0;	for (T1_ = 0; T1_ < (a ? a->Sup.len : 0); T1_++) {
	nimGCvisit((void*)a->data[T1_].payload, op);	}
}
N_LIB_PRIVATE N_NIMCALL(void, waku_waku_store_typesDatInit000)(void) {

#line 999999 "generated_not_to_break_here"
static TNimNode* TM__J4bXcTr9c43hr72C6qT9cs3g_2_5[5];
static TNimNode* TM__J4bXcTr9c43hr72C6qT9cs3g_3_2[2];
static TNimNode* TM__J4bXcTr9c43hr72C6qT9cs3g_4_3[3];
static TNimNode* TM__J4bXcTr9c43hr72C6qT9cs3g_5_2[2];
static TNimNode* TM__J4bXcTr9c43hr72C6qT9cs3g_6_3[3];
static TNimNode* TM__J4bXcTr9c43hr72C6qT9cs3g_7_2[2];
NI TM__J4bXcTr9c43hr72C6qT9cs3g_9;
static char* NIM_CONST TM__J4bXcTr9c43hr72C6qT9cs3g_8[2] = {
"BACKWARD", 
"FORWARD"};
static TNimNode* TM__J4bXcTr9c43hr72C6qT9cs3g_10_2[2];
static TNimNode* TM__J4bXcTr9c43hr72C6qT9cs3g_11_2[2];
static TNimNode TM__J4bXcTr9c43hr72C6qT9cs3g_0[29];NTI__bTNJy9bbtN9aNYuADEgXa2nw_.size = sizeof(tyObject_WakuStorecolonObjectType___bTNJy9bbtN9aNYuADEgXa2nw);
NTI__bTNJy9bbtN9aNYuADEgXa2nw_.kind = 17;
NTI__bTNJy9bbtN9aNYuADEgXa2nw_.base = (&NTI__5aL02d9bjOYDZmYD0dWxn2w_);
NTI__bTNJy9bbtN9aNYuADEgXa2nw_.name = "WakuStore:ObjectType";
NTI__bTNJy9bbtN9aNYuADEgXa2nw_.nextType = nimTypeRoot; nimTypeRoot=&NTI__bTNJy9bbtN9aNYuADEgXa2nw_;
TM__J4bXcTr9c43hr72C6qT9cs3g_2_5[0] = &TM__J4bXcTr9c43hr72C6qT9cs3g_0[1];
TM__J4bXcTr9c43hr72C6qT9cs3g_0[1].kind = 1;
TM__J4bXcTr9c43hr72C6qT9cs3g_0[1].offset = offsetof(tyObject_WakuStorecolonObjectType___bTNJy9bbtN9aNYuADEgXa2nw, peerManager);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[1].typ = (&NTI__mAwL2D2EWMuWoFpTGy9aepg_);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[1].name = "peerManager";
TM__J4bXcTr9c43hr72C6qT9cs3g_2_5[1] = &TM__J4bXcTr9c43hr72C6qT9cs3g_0[2];
TM__J4bXcTr9c43hr72C6qT9cs3g_0[2].kind = 1;
TM__J4bXcTr9c43hr72C6qT9cs3g_0[2].offset = offsetof(tyObject_WakuStorecolonObjectType___bTNJy9bbtN9aNYuADEgXa2nw, rng);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[2].typ = (&NTI__RuNvFuo5ptASsihINNteSw_);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[2].name = "rng";
TM__J4bXcTr9c43hr72C6qT9cs3g_2_5[2] = &TM__J4bXcTr9c43hr72C6qT9cs3g_0[3];
NTI__9cl9a9a4SOJOfbd2cZp8afXXw_.size = sizeof(tyObject_IndexedWakuMessage__9cl9a9a4SOJOfbd2cZp8afXXw);
NTI__9cl9a9a4SOJOfbd2cZp8afXXw_.kind = 18;
NTI__9cl9a9a4SOJOfbd2cZp8afXXw_.base = 0;
NTI__9cl9a9a4SOJOfbd2cZp8afXXw_.flags = 2;
NTI__9cl9a9a4SOJOfbd2cZp8afXXw_.name = "IndexedWakuMessage";
NTI__9cl9a9a4SOJOfbd2cZp8afXXw_.nextType = nimTypeRoot; nimTypeRoot=&NTI__9cl9a9a4SOJOfbd2cZp8afXXw_;
TM__J4bXcTr9c43hr72C6qT9cs3g_3_2[0] = &TM__J4bXcTr9c43hr72C6qT9cs3g_0[5];
TM__J4bXcTr9c43hr72C6qT9cs3g_0[5].kind = 1;
TM__J4bXcTr9c43hr72C6qT9cs3g_0[5].offset = offsetof(tyObject_IndexedWakuMessage__9cl9a9a4SOJOfbd2cZp8afXXw, msg);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[5].typ = (&NTI__snKUdUhXg9ahkzpl1ubVZ0A_);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[5].name = "msg";
TM__J4bXcTr9c43hr72C6qT9cs3g_3_2[1] = &TM__J4bXcTr9c43hr72C6qT9cs3g_0[6];
TM__J4bXcTr9c43hr72C6qT9cs3g_0[6].kind = 1;
TM__J4bXcTr9c43hr72C6qT9cs3g_0[6].offset = offsetof(tyObject_IndexedWakuMessage__9cl9a9a4SOJOfbd2cZp8afXXw, index);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[6].typ = (&NTI__lOZ7xaSDQuG6u4WFzCveFQ_);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[6].name = "index";
TM__J4bXcTr9c43hr72C6qT9cs3g_0[4].len = 2; TM__J4bXcTr9c43hr72C6qT9cs3g_0[4].kind = 2; TM__J4bXcTr9c43hr72C6qT9cs3g_0[4].sons = &TM__J4bXcTr9c43hr72C6qT9cs3g_3_2[0];
NTI__9cl9a9a4SOJOfbd2cZp8afXXw_.node = &TM__J4bXcTr9c43hr72C6qT9cs3g_0[4];
NTI__8d9bxJ1229c513mLE0NixLcQ_.size = sizeof(tySequence__8d9bxJ1229c513mLE0NixLcQ*);
NTI__8d9bxJ1229c513mLE0NixLcQ_.kind = 24;
NTI__8d9bxJ1229c513mLE0NixLcQ_.base = (&NTI__9cl9a9a4SOJOfbd2cZp8afXXw_);
NTI__8d9bxJ1229c513mLE0NixLcQ_.flags = 2;
NTI__8d9bxJ1229c513mLE0NixLcQ_.name = "seq[IndexedWakuMessage]";
NTI__8d9bxJ1229c513mLE0NixLcQ_.nextType = nimTypeRoot; nimTypeRoot=&NTI__8d9bxJ1229c513mLE0NixLcQ_;
NTI__8d9bxJ1229c513mLE0NixLcQ_.marker = Marker_tySequence__8d9bxJ1229c513mLE0NixLcQ;
TM__J4bXcTr9c43hr72C6qT9cs3g_0[3].kind = 1;
TM__J4bXcTr9c43hr72C6qT9cs3g_0[3].offset = offsetof(tyObject_WakuStorecolonObjectType___bTNJy9bbtN9aNYuADEgXa2nw, messages);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[3].typ = (&NTI__8d9bxJ1229c513mLE0NixLcQ_);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[3].name = "messages";
TM__J4bXcTr9c43hr72C6qT9cs3g_2_5[3] = &TM__J4bXcTr9c43hr72C6qT9cs3g_0[7];
TM__J4bXcTr9c43hr72C6qT9cs3g_0[7].kind = 1;
TM__J4bXcTr9c43hr72C6qT9cs3g_0[7].offset = offsetof(tyObject_WakuStorecolonObjectType___bTNJy9bbtN9aNYuADEgXa2nw, store);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[7].typ = (&NTI__bvxr3PSY2I1MO2BtoJ2ytw_);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[7].name = "store";
TM__J4bXcTr9c43hr72C6qT9cs3g_2_5[4] = &TM__J4bXcTr9c43hr72C6qT9cs3g_0[8];
TM__J4bXcTr9c43hr72C6qT9cs3g_0[8].kind = 1;
TM__J4bXcTr9c43hr72C6qT9cs3g_0[8].offset = offsetof(tyObject_WakuStorecolonObjectType___bTNJy9bbtN9aNYuADEgXa2nw, wakuSwap);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[8].typ = (&NTI__dfpr1NaNhM4s3RSj4xSM4w_);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[8].name = "wakuSwap";
TM__J4bXcTr9c43hr72C6qT9cs3g_0[0].len = 5; TM__J4bXcTr9c43hr72C6qT9cs3g_0[0].kind = 2; TM__J4bXcTr9c43hr72C6qT9cs3g_0[0].sons = &TM__J4bXcTr9c43hr72C6qT9cs3g_2_5[0];
NTI__bTNJy9bbtN9aNYuADEgXa2nw_.node = &TM__J4bXcTr9c43hr72C6qT9cs3g_0[0];
NTI__BgTPnf6H2o8WKrA35mWtRw_.size = sizeof(tyObject_WakuStorecolonObjectType___bTNJy9bbtN9aNYuADEgXa2nw*);
NTI__BgTPnf6H2o8WKrA35mWtRw_.kind = 22;
NTI__BgTPnf6H2o8WKrA35mWtRw_.base = (&NTI__bTNJy9bbtN9aNYuADEgXa2nw_);
NTI__BgTPnf6H2o8WKrA35mWtRw_.name = "WakuStore";
NTI__BgTPnf6H2o8WKrA35mWtRw_.nextType = nimTypeRoot; nimTypeRoot=&NTI__BgTPnf6H2o8WKrA35mWtRw_;
NTI__BgTPnf6H2o8WKrA35mWtRw_.marker = Marker_tyRef__BgTPnf6H2o8WKrA35mWtRw;
NTI__EGNx42PC7VqGsUjKX6TR9aw_.size = sizeof(tyObject_HistoryRPC__EGNx42PC7VqGsUjKX6TR9aw);
NTI__EGNx42PC7VqGsUjKX6TR9aw_.kind = 18;
NTI__EGNx42PC7VqGsUjKX6TR9aw_.base = 0;
NTI__EGNx42PC7VqGsUjKX6TR9aw_.flags = 2;
NTI__EGNx42PC7VqGsUjKX6TR9aw_.name = "HistoryRPC";
NTI__EGNx42PC7VqGsUjKX6TR9aw_.nextType = nimTypeRoot; nimTypeRoot=&NTI__EGNx42PC7VqGsUjKX6TR9aw_;
TM__J4bXcTr9c43hr72C6qT9cs3g_4_3[0] = &TM__J4bXcTr9c43hr72C6qT9cs3g_0[10];
TM__J4bXcTr9c43hr72C6qT9cs3g_0[10].kind = 1;
TM__J4bXcTr9c43hr72C6qT9cs3g_0[10].offset = offsetof(tyObject_HistoryRPC__EGNx42PC7VqGsUjKX6TR9aw, requestId);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[10].typ = (&NTI__77mFvmsOLKik79ci2hXkHEg_);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[10].name = "requestId";
TM__J4bXcTr9c43hr72C6qT9cs3g_4_3[1] = &TM__J4bXcTr9c43hr72C6qT9cs3g_0[11];
NTI__jSwvWt3Wmw2bDE9c0nMvYhg_.size = sizeof(tyObject_HistoryQuery__jSwvWt3Wmw2bDE9c0nMvYhg);
NTI__jSwvWt3Wmw2bDE9c0nMvYhg_.kind = 18;
NTI__jSwvWt3Wmw2bDE9c0nMvYhg_.base = 0;
NTI__jSwvWt3Wmw2bDE9c0nMvYhg_.flags = 2;
NTI__jSwvWt3Wmw2bDE9c0nMvYhg_.name = "HistoryQuery";
NTI__jSwvWt3Wmw2bDE9c0nMvYhg_.nextType = nimTypeRoot; nimTypeRoot=&NTI__jSwvWt3Wmw2bDE9c0nMvYhg_;
TM__J4bXcTr9c43hr72C6qT9cs3g_5_2[0] = &TM__J4bXcTr9c43hr72C6qT9cs3g_0[13];
TM__J4bXcTr9c43hr72C6qT9cs3g_0[13].kind = 1;
TM__J4bXcTr9c43hr72C6qT9cs3g_0[13].offset = offsetof(tyObject_HistoryQuery__jSwvWt3Wmw2bDE9c0nMvYhg, topics);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[13].typ = (&NTI__9bAGqSvkAaFL9bWjsEPslrFA_);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[13].name = "topics";
TM__J4bXcTr9c43hr72C6qT9cs3g_5_2[1] = &TM__J4bXcTr9c43hr72C6qT9cs3g_0[14];
NTI__yiZv2G0tYZKnn39bYV9bE71A_.size = sizeof(tyObject_PagingInfo__yiZv2G0tYZKnn39bYV9bE71A);
NTI__yiZv2G0tYZKnn39bYV9bE71A_.kind = 18;
NTI__yiZv2G0tYZKnn39bYV9bE71A_.base = 0;
NTI__yiZv2G0tYZKnn39bYV9bE71A_.flags = 3;
NTI__yiZv2G0tYZKnn39bYV9bE71A_.name = "PagingInfo";
NTI__yiZv2G0tYZKnn39bYV9bE71A_.nextType = nimTypeRoot; nimTypeRoot=&NTI__yiZv2G0tYZKnn39bYV9bE71A_;
TM__J4bXcTr9c43hr72C6qT9cs3g_6_3[0] = &TM__J4bXcTr9c43hr72C6qT9cs3g_0[16];
TM__J4bXcTr9c43hr72C6qT9cs3g_0[16].kind = 1;
TM__J4bXcTr9c43hr72C6qT9cs3g_0[16].offset = offsetof(tyObject_PagingInfo__yiZv2G0tYZKnn39bYV9bE71A, pageSize);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[16].typ = (&NTI__wMtfD88jmrPZwfzTH9c8e9cA_);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[16].name = "pageSize";
TM__J4bXcTr9c43hr72C6qT9cs3g_6_3[1] = &TM__J4bXcTr9c43hr72C6qT9cs3g_0[17];
TM__J4bXcTr9c43hr72C6qT9cs3g_0[17].kind = 1;
TM__J4bXcTr9c43hr72C6qT9cs3g_0[17].offset = offsetof(tyObject_PagingInfo__yiZv2G0tYZKnn39bYV9bE71A, cursor);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[17].typ = (&NTI__lOZ7xaSDQuG6u4WFzCveFQ_);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[17].name = "cursor";
TM__J4bXcTr9c43hr72C6qT9cs3g_6_3[2] = &TM__J4bXcTr9c43hr72C6qT9cs3g_0[18];
NTI__9clPRC2FpWxGkQQzKVE9a3Lw_.size = sizeof(tyEnum_PagingDirection__9clPRC2FpWxGkQQzKVE9a3Lw);
NTI__9clPRC2FpWxGkQQzKVE9a3Lw_.kind = 14;
NTI__9clPRC2FpWxGkQQzKVE9a3Lw_.base = 0;
NTI__9clPRC2FpWxGkQQzKVE9a3Lw_.flags = 3;
NTI__9clPRC2FpWxGkQQzKVE9a3Lw_.name = "PagingDirection";
NTI__9clPRC2FpWxGkQQzKVE9a3Lw_.nextType = nimTypeRoot; nimTypeRoot=&NTI__9clPRC2FpWxGkQQzKVE9a3Lw_;
for (TM__J4bXcTr9c43hr72C6qT9cs3g_9 = 0; TM__J4bXcTr9c43hr72C6qT9cs3g_9 < 2; TM__J4bXcTr9c43hr72C6qT9cs3g_9++) {
TM__J4bXcTr9c43hr72C6qT9cs3g_0[TM__J4bXcTr9c43hr72C6qT9cs3g_9+19].kind = 1;
TM__J4bXcTr9c43hr72C6qT9cs3g_0[TM__J4bXcTr9c43hr72C6qT9cs3g_9+19].offset = TM__J4bXcTr9c43hr72C6qT9cs3g_9;
TM__J4bXcTr9c43hr72C6qT9cs3g_0[TM__J4bXcTr9c43hr72C6qT9cs3g_9+19].name = TM__J4bXcTr9c43hr72C6qT9cs3g_8[TM__J4bXcTr9c43hr72C6qT9cs3g_9];
TM__J4bXcTr9c43hr72C6qT9cs3g_7_2[TM__J4bXcTr9c43hr72C6qT9cs3g_9] = &TM__J4bXcTr9c43hr72C6qT9cs3g_0[TM__J4bXcTr9c43hr72C6qT9cs3g_9+19];
}
TM__J4bXcTr9c43hr72C6qT9cs3g_0[21].len = 2; TM__J4bXcTr9c43hr72C6qT9cs3g_0[21].kind = 2; TM__J4bXcTr9c43hr72C6qT9cs3g_0[21].sons = &TM__J4bXcTr9c43hr72C6qT9cs3g_7_2[0];
NTI__9clPRC2FpWxGkQQzKVE9a3Lw_.node = &TM__J4bXcTr9c43hr72C6qT9cs3g_0[21];
TM__J4bXcTr9c43hr72C6qT9cs3g_0[18].kind = 1;
TM__J4bXcTr9c43hr72C6qT9cs3g_0[18].offset = offsetof(tyObject_PagingInfo__yiZv2G0tYZKnn39bYV9bE71A, direction);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[18].typ = (&NTI__9clPRC2FpWxGkQQzKVE9a3Lw_);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[18].name = "direction";
TM__J4bXcTr9c43hr72C6qT9cs3g_0[15].len = 3; TM__J4bXcTr9c43hr72C6qT9cs3g_0[15].kind = 2; TM__J4bXcTr9c43hr72C6qT9cs3g_0[15].sons = &TM__J4bXcTr9c43hr72C6qT9cs3g_6_3[0];
NTI__yiZv2G0tYZKnn39bYV9bE71A_.node = &TM__J4bXcTr9c43hr72C6qT9cs3g_0[15];
TM__J4bXcTr9c43hr72C6qT9cs3g_0[14].kind = 1;
TM__J4bXcTr9c43hr72C6qT9cs3g_0[14].offset = offsetof(tyObject_HistoryQuery__jSwvWt3Wmw2bDE9c0nMvYhg, pagingInfo);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[14].typ = (&NTI__yiZv2G0tYZKnn39bYV9bE71A_);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[14].name = "pagingInfo";
TM__J4bXcTr9c43hr72C6qT9cs3g_0[12].len = 2; TM__J4bXcTr9c43hr72C6qT9cs3g_0[12].kind = 2; TM__J4bXcTr9c43hr72C6qT9cs3g_0[12].sons = &TM__J4bXcTr9c43hr72C6qT9cs3g_5_2[0];
NTI__jSwvWt3Wmw2bDE9c0nMvYhg_.node = &TM__J4bXcTr9c43hr72C6qT9cs3g_0[12];
TM__J4bXcTr9c43hr72C6qT9cs3g_0[11].kind = 1;
TM__J4bXcTr9c43hr72C6qT9cs3g_0[11].offset = offsetof(tyObject_HistoryRPC__EGNx42PC7VqGsUjKX6TR9aw, query);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[11].typ = (&NTI__jSwvWt3Wmw2bDE9c0nMvYhg_);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[11].name = "query";
TM__J4bXcTr9c43hr72C6qT9cs3g_4_3[2] = &TM__J4bXcTr9c43hr72C6qT9cs3g_0[22];
NTI__xDg0UAKGB8XrRjSUqHlWFw_.size = sizeof(tyObject_HistoryResponse__xDg0UAKGB8XrRjSUqHlWFw);
NTI__xDg0UAKGB8XrRjSUqHlWFw_.kind = 18;
NTI__xDg0UAKGB8XrRjSUqHlWFw_.base = 0;
NTI__xDg0UAKGB8XrRjSUqHlWFw_.flags = 2;
NTI__xDg0UAKGB8XrRjSUqHlWFw_.name = "HistoryResponse";
NTI__xDg0UAKGB8XrRjSUqHlWFw_.nextType = nimTypeRoot; nimTypeRoot=&NTI__xDg0UAKGB8XrRjSUqHlWFw_;
TM__J4bXcTr9c43hr72C6qT9cs3g_10_2[0] = &TM__J4bXcTr9c43hr72C6qT9cs3g_0[24];
NTI__CP6AbN9aoC6Xupc2HZLYt1w_.size = sizeof(tySequence__CP6AbN9aoC6Xupc2HZLYt1w*);
NTI__CP6AbN9aoC6Xupc2HZLYt1w_.kind = 24;
NTI__CP6AbN9aoC6Xupc2HZLYt1w_.base = (&NTI__snKUdUhXg9ahkzpl1ubVZ0A_);
NTI__CP6AbN9aoC6Xupc2HZLYt1w_.flags = 2;
NTI__CP6AbN9aoC6Xupc2HZLYt1w_.name = "seq[WakuMessage]";
NTI__CP6AbN9aoC6Xupc2HZLYt1w_.nextType = nimTypeRoot; nimTypeRoot=&NTI__CP6AbN9aoC6Xupc2HZLYt1w_;
NTI__CP6AbN9aoC6Xupc2HZLYt1w_.marker = Marker_tySequence__CP6AbN9aoC6Xupc2HZLYt1w;
TM__J4bXcTr9c43hr72C6qT9cs3g_0[24].kind = 1;
TM__J4bXcTr9c43hr72C6qT9cs3g_0[24].offset = offsetof(tyObject_HistoryResponse__xDg0UAKGB8XrRjSUqHlWFw, messages);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[24].typ = (&NTI__CP6AbN9aoC6Xupc2HZLYt1w_);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[24].name = "messages";
TM__J4bXcTr9c43hr72C6qT9cs3g_10_2[1] = &TM__J4bXcTr9c43hr72C6qT9cs3g_0[25];
TM__J4bXcTr9c43hr72C6qT9cs3g_0[25].kind = 1;
TM__J4bXcTr9c43hr72C6qT9cs3g_0[25].offset = offsetof(tyObject_HistoryResponse__xDg0UAKGB8XrRjSUqHlWFw, pagingInfo);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[25].typ = (&NTI__yiZv2G0tYZKnn39bYV9bE71A_);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[25].name = "pagingInfo";
TM__J4bXcTr9c43hr72C6qT9cs3g_0[23].len = 2; TM__J4bXcTr9c43hr72C6qT9cs3g_0[23].kind = 2; TM__J4bXcTr9c43hr72C6qT9cs3g_0[23].sons = &TM__J4bXcTr9c43hr72C6qT9cs3g_10_2[0];
NTI__xDg0UAKGB8XrRjSUqHlWFw_.node = &TM__J4bXcTr9c43hr72C6qT9cs3g_0[23];
TM__J4bXcTr9c43hr72C6qT9cs3g_0[22].kind = 1;
TM__J4bXcTr9c43hr72C6qT9cs3g_0[22].offset = offsetof(tyObject_HistoryRPC__EGNx42PC7VqGsUjKX6TR9aw, response);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[22].typ = (&NTI__xDg0UAKGB8XrRjSUqHlWFw_);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[22].name = "response";
TM__J4bXcTr9c43hr72C6qT9cs3g_0[9].len = 3; TM__J4bXcTr9c43hr72C6qT9cs3g_0[9].kind = 2; TM__J4bXcTr9c43hr72C6qT9cs3g_0[9].sons = &TM__J4bXcTr9c43hr72C6qT9cs3g_4_3[0];
NTI__EGNx42PC7VqGsUjKX6TR9aw_.node = &TM__J4bXcTr9c43hr72C6qT9cs3g_0[9];
NTI__afTpDKuOJgODVx1JZPJ9awQ_.size = sizeof(tyTuple__JfHvHzMrhKkWAUvQKe0i1A);
NTI__afTpDKuOJgODVx1JZPJ9awQ_.kind = 18;
NTI__afTpDKuOJgODVx1JZPJ9awQ_.base = 0;
NTI__afTpDKuOJgODVx1JZPJ9awQ_.name = "tuple of (pointer, ref object)";
NTI__afTpDKuOJgODVx1JZPJ9awQ_.nextType = nimTypeRoot; nimTypeRoot=&NTI__afTpDKuOJgODVx1JZPJ9awQ_;
TM__J4bXcTr9c43hr72C6qT9cs3g_11_2[0] = &TM__J4bXcTr9c43hr72C6qT9cs3g_0[27];
TM__J4bXcTr9c43hr72C6qT9cs3g_0[27].kind = 1;
TM__J4bXcTr9c43hr72C6qT9cs3g_0[27].offset = offsetof(tyTuple__JfHvHzMrhKkWAUvQKe0i1A, Field0);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[27].typ = (&NTI__vr5DoT1jILTGdRlYv1OYpw_);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[27].name = "Field0";
TM__J4bXcTr9c43hr72C6qT9cs3g_11_2[1] = &TM__J4bXcTr9c43hr72C6qT9cs3g_0[28];
TM__J4bXcTr9c43hr72C6qT9cs3g_0[28].kind = 1;
TM__J4bXcTr9c43hr72C6qT9cs3g_0[28].offset = offsetof(tyTuple__JfHvHzMrhKkWAUvQKe0i1A, Field1);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[28].typ = (&NTI__HsJiUUcO9cHBdUCi0HwkSTA_);
TM__J4bXcTr9c43hr72C6qT9cs3g_0[28].name = "Field1";
TM__J4bXcTr9c43hr72C6qT9cs3g_0[26].len = 2; TM__J4bXcTr9c43hr72C6qT9cs3g_0[26].kind = 2; TM__J4bXcTr9c43hr72C6qT9cs3g_0[26].sons = &TM__J4bXcTr9c43hr72C6qT9cs3g_11_2[0];
NTI__afTpDKuOJgODVx1JZPJ9awQ_.node = &TM__J4bXcTr9c43hr72C6qT9cs3g_0[26];
}
