/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -pthread -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace/install/usr/include -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/src -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/inc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/tools -DBR_USE_UNIX_TIME=1 -DBR_USE_URANDOM=1 -DBR_LE_UNALIGNED=1 -DBR_64=1  -DBR_amd64=1 -DBR_INT128=1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1/src -DHAVE_CONFIG_H -DHAVE_BUILTIN_EXPECT -march=native -g3 -Og -O3 -fno-strict-aliasing -fno-ident  -I/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib -I/home/runner/work/nim-waku/nim-waku/waku/v2/node -o nimcache/release/start_network2/stdlib_options.nim.c.o nimcache/release/start_network2/stdlib_options.nim.c */
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
typedef struct tyObject_Option__Em5DpQtK80JNdy8nyXe6Kg tyObject_Option__Em5DpQtK80JNdy8nyXe6Kg;
typedef struct tyObject_PublicKey__mVKS59bRpscItosS0oN9a4zA tyObject_PublicKey__mVKS59bRpscItosS0oN9a4zA;
typedef struct tyObject_RsaPublicKeycolonObjectType___cEZIZ6MRRYNM7g7RvdoBpg tyObject_RsaPublicKeycolonObjectType___cEZIZ6MRRYNM7g7RvdoBpg;
typedef struct tyObject_EdPublicKey__fCTHNrLwOTcb1HatTDTAEA tyObject_EdPublicKey__fCTHNrLwOTcb1HatTDTAEA;
typedef struct tyObject_SkPublicKey__YxxaGK7KOKaWCOaZ44rHMA tyObject_SkPublicKey__YxxaGK7KOKaWCOaZ44rHMA;
typedef struct tyObject_secp256k1_pubkey__GYc9aFo1e2qOLdmAqUvIikQ tyObject_secp256k1_pubkey__GYc9aFo1e2qOLdmAqUvIikQ;
typedef struct tyObject_EcPublicKeycolonObjectType___2rc9bUkP8wBzp3UeWWgE9b5Q tyObject_EcPublicKeycolonObjectType___2rc9bUkP8wBzp3UeWWgE9b5Q;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef NU8 tyEnum_PKScheme__GeN4EiKxd9aXAvv5y1lfmHg;
typedef NU8 tyArray__vEOa9c5qaE9ajWxR5R4zwfQg[32];
struct tyObject_EdPublicKey__fCTHNrLwOTcb1HatTDTAEA {tyArray__vEOa9c5qaE9ajWxR5R4zwfQg data;
};
typedef NU8 tyArray__w5VB8h5K8DB3oWrO5U2wqg[64];
struct tyObject_secp256k1_pubkey__GYc9aFo1e2qOLdmAqUvIikQ {tyArray__w5VB8h5K8DB3oWrO5U2wqg data;
};
struct tyObject_SkPublicKey__YxxaGK7KOKaWCOaZ44rHMA {tyObject_secp256k1_pubkey__GYc9aFo1e2qOLdmAqUvIikQ data;
};
struct tyObject_PublicKey__mVKS59bRpscItosS0oN9a4zA {tyEnum_PKScheme__GeN4EiKxd9aXAvv5y1lfmHg scheme;
union{
struct {tyObject_RsaPublicKeycolonObjectType___cEZIZ6MRRYNM7g7RvdoBpg* rsakey;
} _scheme_1;
struct {tyObject_EdPublicKey__fCTHNrLwOTcb1HatTDTAEA edkey;
} _scheme_2;
struct {tyObject_SkPublicKey__YxxaGK7KOKaWCOaZ44rHMA skkey;
} _scheme_3;
struct {tyObject_EcPublicKeycolonObjectType___2rc9bUkP8wBzp3UeWWgE9b5Q* eckey;
} _scheme_4;
};
};
struct tyObject_Option__Em5DpQtK80JNdy8nyXe6Kg {tyObject_PublicKey__mVKS59bRpscItosS0oN9a4zA val;
NIM_BOOL has;
};
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
N_LIB_PRIVATE TNimType NTI__Em5DpQtK80JNdy8nyXe6Kg_;
extern TNimType NTI__mVKS59bRpscItosS0oN9a4zA_;
extern TNimType NTI__VaVACK0bpYmqIQ0mKcHfQQ_;
extern TNimType* nimTypeRoot;
N_LIB_PRIVATE N_NIMCALL(void, stdlib_optionsDatInit000)(void) {

#line 999999 "generated_not_to_break_here"
static TNimNode* TM__4DNs4bMUkswhWc4o4dM9bbg_2_2[2];
static TNimNode TM__4DNs4bMUkswhWc4o4dM9bbg_0[3];NTI__Em5DpQtK80JNdy8nyXe6Kg_.size = sizeof(tyObject_Option__Em5DpQtK80JNdy8nyXe6Kg);
NTI__Em5DpQtK80JNdy8nyXe6Kg_.kind = 18;
NTI__Em5DpQtK80JNdy8nyXe6Kg_.base = 0;
NTI__Em5DpQtK80JNdy8nyXe6Kg_.flags = 2;
NTI__Em5DpQtK80JNdy8nyXe6Kg_.name = "Option[crypto.PublicKey]";
NTI__Em5DpQtK80JNdy8nyXe6Kg_.nextType = nimTypeRoot; nimTypeRoot=&NTI__Em5DpQtK80JNdy8nyXe6Kg_;
TM__4DNs4bMUkswhWc4o4dM9bbg_2_2[0] = &TM__4DNs4bMUkswhWc4o4dM9bbg_0[1];
TM__4DNs4bMUkswhWc4o4dM9bbg_0[1].kind = 1;
TM__4DNs4bMUkswhWc4o4dM9bbg_0[1].offset = offsetof(tyObject_Option__Em5DpQtK80JNdy8nyXe6Kg, val);
TM__4DNs4bMUkswhWc4o4dM9bbg_0[1].typ = (&NTI__mVKS59bRpscItosS0oN9a4zA_);
TM__4DNs4bMUkswhWc4o4dM9bbg_0[1].name = "val";
TM__4DNs4bMUkswhWc4o4dM9bbg_2_2[1] = &TM__4DNs4bMUkswhWc4o4dM9bbg_0[2];
TM__4DNs4bMUkswhWc4o4dM9bbg_0[2].kind = 1;
TM__4DNs4bMUkswhWc4o4dM9bbg_0[2].offset = offsetof(tyObject_Option__Em5DpQtK80JNdy8nyXe6Kg, has);
TM__4DNs4bMUkswhWc4o4dM9bbg_0[2].typ = (&NTI__VaVACK0bpYmqIQ0mKcHfQQ_);
TM__4DNs4bMUkswhWc4o4dM9bbg_0[2].name = "has";
TM__4DNs4bMUkswhWc4o4dM9bbg_0[0].len = 2; TM__4DNs4bMUkswhWc4o4dM9bbg_0[0].kind = 2; TM__4DNs4bMUkswhWc4o4dM9bbg_0[0].sons = &TM__4DNs4bMUkswhWc4o4dM9bbg_2_2[0];
NTI__Em5DpQtK80JNdy8nyXe6Kg_.node = &TM__4DNs4bMUkswhWc4o4dM9bbg_0[0];
}
