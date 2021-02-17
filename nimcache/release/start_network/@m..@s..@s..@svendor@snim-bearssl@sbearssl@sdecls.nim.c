/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -pthread -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace/install/usr/include -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1/src -DHAVE_CONFIG_H -DHAVE_BUILTIN_EXPECT -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/src -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/inc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/tools -DBR_USE_UNIX_TIME=1 -DBR_USE_URANDOM=1 -DBR_LE_UNALIGNED=1 -DBR_64=1  -DBR_amd64=1 -DBR_INT128=1 -march=native -g3 -Og -O3 -fno-strict-aliasing -fno-ident  -I/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib -I/home/runner/work/nim-waku/nim-waku/waku/v1/node -o nimcache/release/start_network/@m..@s..@s..@svendor@snim-bearssl@sbearssl@sdecls.nim.c.o nimcache/release/start_network/@m..@s..@s..@svendor@snim-bearssl@sbearssl@sdecls.nim.c */
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
typedef unsigned char tyArray__A1SHJCPZVISPTujoygIPEQ[64];
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
typedef N_CDECL_PTR(void, tyProc__3qI9bVHqiq07sTQRU9bkkkYQ) (br_prng_class** ctx, void* params, void* seed, NI seedLen);
typedef N_CDECL_PTR(void, tyProc__hquUwNr88w4T5ldt8BqLLQ) (br_prng_class** ctx, void* out_0, NI len_0);
typedef N_CDECL_PTR(void, tyProc__bF2JFxTs1q6Lq365NU79a2Q) (br_hash_class** ctx);
typedef N_CDECL_PTR(void, tyProc__Dc9br5a6SHw9cxie3cas0KTA) (br_hash_class** ctx, void* data_0, NI len_0);
typedef N_CDECL_PTR(void, tyProc__JETfgzvEnx6Tz9bYRct9a51g) (br_hash_class** ctx, void* dst);
typedef N_CDECL_PTR(NU64, tyProc__e9bd9aJH2sCZh75q9aAcv7ylg) (br_hash_class** ctx, void* dst);
typedef N_CDECL_PTR(void, tyProc__g9c2vH2tlPaPmvfTZ3PeWQQ) (br_hash_class** ctx, void* stb, NU64 count_0);
static N_NIMCALL(void, Marker_tyRef__RuNvFuo5ptASsihINNteSw)(void* p, NI op);
N_LIB_PRIVATE TNimType NTI__ByV8KXIkOGF6hVx8GyHMRA_;
N_LIB_PRIVATE TNimType NTI__RuNvFuo5ptASsihINNteSw_;
N_LIB_PRIVATE TNimType NTI__P862mCDAUrlG5aF5HvxacQ_;
extern TNimType* nimTypeRoot;
static N_NIMCALL(void, Marker_tyRef__RuNvFuo5ptASsihINNteSw)(void* p, NI op) {
	br_hmac_drbg_context* a;
	NI T1_;	NI T2_;	a = (br_hmac_drbg_context*)p;
	T1_ = (NI)0;	T2_ = (NI)0;}

#line 3700 "/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/decls.nim"
N_LIB_PRIVATE N_NIMCALL(void, brHmacDrbgGenerate__jb39atYOOGTT2cdYx6onnSw)(br_hmac_drbg_context* ctx, NU8* outp, NI outpLen_0) {
#line 3701 "/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/decls.nim"

#line 3701 "/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/decls.nim"

#line 3701 "/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/decls.nim"
	br_hmac_drbg_generate(ctx, ((void*) (outp)), ((size_t) (outpLen_0)));
}
N_LIB_PRIVATE N_NIMCALL(void, bearssl_declsDatInit000)(void) {

#line 999999 "generated_not_to_break_here"
static TNimNode TM__gg9baITYk2GeT13PuMY8Pxw_0[1];NTI__ByV8KXIkOGF6hVx8GyHMRA_.size = sizeof(br_hmac_drbg_context);
NTI__ByV8KXIkOGF6hVx8GyHMRA_.kind = 18;
NTI__ByV8KXIkOGF6hVx8GyHMRA_.base = 0;
NTI__ByV8KXIkOGF6hVx8GyHMRA_.flags = 3;
NTI__ByV8KXIkOGF6hVx8GyHMRA_.name = "HmacDrbgContext";
NTI__ByV8KXIkOGF6hVx8GyHMRA_.nextType = nimTypeRoot; nimTypeRoot=&NTI__ByV8KXIkOGF6hVx8GyHMRA_;
NTI__ByV8KXIkOGF6hVx8GyHMRA_.node = &TM__gg9baITYk2GeT13PuMY8Pxw_0[0];
NTI__RuNvFuo5ptASsihINNteSw_.size = sizeof(br_hmac_drbg_context*);
NTI__RuNvFuo5ptASsihINNteSw_.kind = 22;
NTI__RuNvFuo5ptASsihINNteSw_.base = (&NTI__ByV8KXIkOGF6hVx8GyHMRA_);
NTI__RuNvFuo5ptASsihINNteSw_.flags = 2;
NTI__RuNvFuo5ptASsihINNteSw_.name = "ref HmacDrbgContext";
NTI__RuNvFuo5ptASsihINNteSw_.nextType = nimTypeRoot; nimTypeRoot=&NTI__RuNvFuo5ptASsihINNteSw_;
NTI__RuNvFuo5ptASsihINNteSw_.marker = Marker_tyRef__RuNvFuo5ptASsihINNteSw;
NTI__P862mCDAUrlG5aF5HvxacQ_.size = sizeof(br_hmac_drbg_context*);
NTI__P862mCDAUrlG5aF5HvxacQ_.kind = 21;
NTI__P862mCDAUrlG5aF5HvxacQ_.base = (&NTI__ByV8KXIkOGF6hVx8GyHMRA_);
NTI__P862mCDAUrlG5aF5HvxacQ_.flags = 3;
NTI__P862mCDAUrlG5aF5HvxacQ_.name = "ptr HmacDrbgContext";
NTI__P862mCDAUrlG5aF5HvxacQ_.nextType = nimTypeRoot; nimTypeRoot=&NTI__P862mCDAUrlG5aF5HvxacQ_;
}
