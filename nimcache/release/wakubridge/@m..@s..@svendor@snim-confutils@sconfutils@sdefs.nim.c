/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -pthread -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace/install/usr/include -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1/src -DHAVE_CONFIG_H -DHAVE_BUILTIN_EXPECT -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/src -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/inc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/tools -DBR_USE_UNIX_TIME=1 -DBR_USE_URANDOM=1 -DBR_LE_UNALIGNED=1 -DBR_64=1  -DBR_amd64=1 -DBR_INT128=1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/miniupnp/miniupnpc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/libnatpmp-upstream -DENABLE_STRNATPMPERR -march=native -g3 -Og -O3 -fno-strict-aliasing -fno-ident  -I/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib -I/home/runner/work/nim-waku/nim-waku/waku/common -o nimcache/release/wakubridge/@m..@s..@svendor@snim-confutils@sconfutils@sdefs.nim.c.o nimcache/release/wakubridge/@m..@s..@svendor@snim-confutils@sconfutils@sdefs.nim.c */
#define NIM_INTBITS 64

#include "nimbase.h"
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
typedef struct tyObject_ConfigurationError__2OTe7rmocWIIjZ8nziTAfg tyObject_ConfigurationError__2OTe7rmocWIIjZ8nziTAfg;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
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
struct Exception {  RootObj Sup;Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence__uB9b75OUPRENsBAu4AnoePA* trace;
Exception* up;
};
struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA {  Exception Sup;};
struct tyObject_ConfigurationError__2OTe7rmocWIIjZ8nziTAfg {  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;};
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {  TGenericSeq Sup;  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];};N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tyRef__QPnWKpN30j0Noc1fJU42oQ)(void* p, NI op);
extern TNimType NTI__qrLSDoe2oBoAqNtJ9badtnA_;
N_LIB_PRIVATE TNimType NTI__2OTe7rmocWIIjZ8nziTAfg_;
N_LIB_PRIVATE TNimType NTI__QPnWKpN30j0Noc1fJU42oQ_;
extern TNimType* nimTypeRoot;
static N_NIMCALL(void, Marker_tyRef__QPnWKpN30j0Noc1fJU42oQ)(void* p, NI op) {
	tyObject_ConfigurationError__2OTe7rmocWIIjZ8nziTAfg* a;
	a = (tyObject_ConfigurationError__2OTe7rmocWIIjZ8nziTAfg*)p;
	nimGCvisit((void*)(*a).Sup.Sup.parent, op);	nimGCvisit((void*)(*a).Sup.Sup.message, op);	nimGCvisit((void*)(*a).Sup.Sup.trace, op);	nimGCvisit((void*)(*a).Sup.Sup.up, op);}
N_LIB_PRIVATE N_NIMCALL(void, confutils_defsDatInit000)(void) {

#line 999999 "generated_not_to_break_here"
static TNimNode TM__ah6KQCc8MH9b29bu9c56UCFxQ_0[1];NTI__2OTe7rmocWIIjZ8nziTAfg_.size = sizeof(tyObject_ConfigurationError__2OTe7rmocWIIjZ8nziTAfg);
NTI__2OTe7rmocWIIjZ8nziTAfg_.kind = 17;
NTI__2OTe7rmocWIIjZ8nziTAfg_.base = (&NTI__qrLSDoe2oBoAqNtJ9badtnA_);
NTI__2OTe7rmocWIIjZ8nziTAfg_.name = "ConfigurationError";
NTI__2OTe7rmocWIIjZ8nziTAfg_.nextType = nimTypeRoot; nimTypeRoot=&NTI__2OTe7rmocWIIjZ8nziTAfg_;
TM__ah6KQCc8MH9b29bu9c56UCFxQ_0[0].len = 0; TM__ah6KQCc8MH9b29bu9c56UCFxQ_0[0].kind = 2;
NTI__2OTe7rmocWIIjZ8nziTAfg_.node = &TM__ah6KQCc8MH9b29bu9c56UCFxQ_0[0];
NTI__QPnWKpN30j0Noc1fJU42oQ_.size = sizeof(tyObject_ConfigurationError__2OTe7rmocWIIjZ8nziTAfg*);
NTI__QPnWKpN30j0Noc1fJU42oQ_.kind = 22;
NTI__QPnWKpN30j0Noc1fJU42oQ_.base = (&NTI__2OTe7rmocWIIjZ8nziTAfg_);
NTI__QPnWKpN30j0Noc1fJU42oQ_.name = "ref ConfigurationError";
NTI__QPnWKpN30j0Noc1fJU42oQ_.nextType = nimTypeRoot; nimTypeRoot=&NTI__QPnWKpN30j0Noc1fJU42oQ_;
NTI__QPnWKpN30j0Noc1fJU42oQ_.marker = Marker_tyRef__QPnWKpN30j0Noc1fJU42oQ;
}
