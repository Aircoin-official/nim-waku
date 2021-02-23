/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -pthread -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace/install/usr/include -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1/src -DHAVE_CONFIG_H -DHAVE_BUILTIN_EXPECT -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/src -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/inc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/tools -DBR_USE_UNIX_TIME=1 -DBR_USE_URANDOM=1 -DBR_LE_UNALIGNED=1 -DBR_64=1  -DBR_amd64=1 -DBR_INT128=1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/certs -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/miniupnp/miniupnpc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/libnatpmp-upstream -DENABLE_STRNATPMPERR -march=native -g3 -Og -O3 -fno-strict-aliasing -fno-ident  -I/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib -I/home/runner/work/nim-waku/nim-waku/waku/v2/node -o nimcache/release/wakunode2/stdlib_posix.nim.c.o nimcache/release/wakunode2/stdlib_posix.nim.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <sys/socket.h>
#include <sys/types.h>
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
typedef NIM_CHAR tyArray__88cL9aIjR1409cgg9c9cQ0gIvw[118];
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
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(int, WTERMSIG__T7ZeAv6ofGPBA29bsuGG1ug)(int s_0);
N_LIB_PRIVATE TNimType NTI__wEklqjI5bJy7tn1y39bS9cMQ_;
N_LIB_PRIVATE TNimType NTI__g5pzUdZ4trcxDnPXDYd6QQ_;
N_LIB_PRIVATE TNimType NTI__r9bTMVI8f19ah9b11jMgY4kPg_;
extern TNimType* nimTypeRoot;

#line 583 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/posix/posix_linux_amd64.nim"
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, WIFSIGNALED__o9b5GK70QLj9ahJeczQ2LyRg)(int s_0) {	NIM_BOOL result;	NI TM__mJPr4mHlDfNAl9asG6X7NFA_2;	result = (NIM_BOOL)0;
#line 583 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/posix/posix_linux_amd64.nim"

#line 583 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/posix/posix_linux_amd64.nim"

#line 583 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/posix/posix_linux_amd64.nim"

#line 583 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/posix/posix_linux_amd64.nim"

#line 583 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/posix/posix_linux_amd64.nim"
	if (nimAddInt((NI32)(s_0 & ((NI32) 127)), ((NI32) 1), &TM__mJPr4mHlDfNAl9asG6X7NFA_2)) { raiseOverflow(); };	if (TM__mJPr4mHlDfNAl9asG6X7NFA_2 < (-2147483647 -1) || TM__mJPr4mHlDfNAl9asG6X7NFA_2 > 2147483647){ raiseOverflow(); }	result = (((NI8) 0) < (NI8)((NI64)(((NI8) ((NI32)(TM__mJPr4mHlDfNAl9asG6X7NFA_2)))) >> (NU64)(((NI) 1))));	return result;}

#line 580 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/posix/posix_linux_amd64.nim"
N_LIB_PRIVATE N_NIMCALL(int, WTERMSIG__T7ZeAv6ofGPBA29bsuGG1ug)(int s_0) {	int result;	result = (int)0;
#line 580 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/posix/posix_linux_amd64.nim"

#line 580 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/posix/posix_linux_amd64.nim"
	result = (NI32)(s_0 & ((NI32) 127));	return result;}

#line 579 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/posix/posix_linux_amd64.nim"
N_LIB_PRIVATE N_NIMCALL(int, WEXITSTATUS__T7ZeAv6ofGPBA29bsuGG1ug_2)(int s_0) {	int result;	result = (int)0;
#line 579 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/posix/posix_linux_amd64.nim"

#line 579 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/posix/posix_linux_amd64.nim"

#line 579 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/posix/posix_linux_amd64.nim"
	result = (NI32)((NI64)((NI32)(s_0 & ((NI32) 65280))) >> (NU64)(((NI) 8)));	return result;}

#line 582 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/posix/posix_linux_amd64.nim"
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, WIFEXITED__o9b5GK70QLj9ahJeczQ2LyRg_2)(int s_0) {	NIM_BOOL result;	int T1_;	result = (NIM_BOOL)0;
#line 582 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/posix/posix_linux_amd64.nim"

#line 582 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/posix/posix_linux_amd64.nim"

#line 582 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/posix/posix_linux_amd64.nim"

#line 582 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/posix/posix_linux_amd64.nim"
	T1_ = (int)0;	T1_ = WTERMSIG__T7ZeAv6ofGPBA29bsuGG1ug(s_0);	result = (T1_ == ((NI32) 0));	return result;}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_posixDatInit000)(void) {

#line 999999 "generated_not_to_break_here"
static TNimNode TM__mJPr4mHlDfNAl9asG6X7NFA_0[1];NTI__wEklqjI5bJy7tn1y39bS9cMQ_.size = sizeof(struct sockaddr_storage);
NTI__wEklqjI5bJy7tn1y39bS9cMQ_.kind = 18;
NTI__wEklqjI5bJy7tn1y39bS9cMQ_.base = 0;
NTI__wEklqjI5bJy7tn1y39bS9cMQ_.flags = 3;
NTI__wEklqjI5bJy7tn1y39bS9cMQ_.name = "Sockaddr_storage";
NTI__wEklqjI5bJy7tn1y39bS9cMQ_.nextType = nimTypeRoot; nimTypeRoot=&NTI__wEklqjI5bJy7tn1y39bS9cMQ_;
NTI__wEklqjI5bJy7tn1y39bS9cMQ_.node = &TM__mJPr4mHlDfNAl9asG6X7NFA_0[0];
NTI__g5pzUdZ4trcxDnPXDYd6QQ_.size = sizeof(socklen_t);
NTI__g5pzUdZ4trcxDnPXDYd6QQ_.kind = 43;
NTI__g5pzUdZ4trcxDnPXDYd6QQ_.base = 0;
NTI__g5pzUdZ4trcxDnPXDYd6QQ_.flags = 3;
NTI__g5pzUdZ4trcxDnPXDYd6QQ_.name = "SockLen";
NTI__g5pzUdZ4trcxDnPXDYd6QQ_.nextType = nimTypeRoot; nimTypeRoot=&NTI__g5pzUdZ4trcxDnPXDYd6QQ_;
NTI__r9bTMVI8f19ah9b11jMgY4kPg_.size = sizeof(pid_t);
NTI__r9bTMVI8f19ah9b11jMgY4kPg_.kind = 34;
NTI__r9bTMVI8f19ah9b11jMgY4kPg_.base = 0;
NTI__r9bTMVI8f19ah9b11jMgY4kPg_.flags = 3;
NTI__r9bTMVI8f19ah9b11jMgY4kPg_.name = "Pid";
NTI__r9bTMVI8f19ah9b11jMgY4kPg_.nextType = nimTypeRoot; nimTypeRoot=&NTI__r9bTMVI8f19ah9b11jMgY4kPg_;
}

