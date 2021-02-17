/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -pthread -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace/install/usr/include -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1/src -DHAVE_CONFIG_H -DHAVE_BUILTIN_EXPECT -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/src -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/inc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/tools -DBR_USE_UNIX_TIME=1 -DBR_USE_URANDOM=1 -DBR_LE_UNALIGNED=1 -DBR_64=1  -DBR_amd64=1 -DBR_INT128=1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/miniupnp/miniupnpc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/libnatpmp-upstream -DENABLE_STRNATPMPERR -march=native -g3 -Og -O3 -fno-strict-aliasing -fno-ident  -I/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib -I/home/runner/work/nim-waku/nim-waku/examples/v2 -o nimcache/release/chat2/@m..@s..@svendor@snim-chronos@schronos@shandles.nim.c.o nimcache/release/chat2/@m..@s..@svendor@snim-chronos@schronos@shandles.nim.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <fcntl.h>
#include <sys/socket.h>
#include <string.h>
#include <unistd.h>
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
typedef struct tyTuple__rTI1z5tLuTbP9b133u2ve6A tyTuple__rTI1z5tLuTbP9b133u2ve6A;
typedef NU8 tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg;
typedef NU8 tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw;
typedef NU8 tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg;
struct tyTuple__rTI1z5tLuTbP9b133u2ve6A {
int Field0;
int Field1;
};
typedef int tyArray__SKEqGXcReU4NvbQlH779b5Q[2];
N_LIB_PRIVATE N_NIMCALL(int, createNativeSocket__JC9abIjAA731bWpDMsti9a5Q)(tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg domain, tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw sockType, tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg protocol);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, setSocketBlocking__Vt2pA9bcPxhq5Wei9cLrmQVg)(int s, NIM_BOOL blocking);
N_LIB_PRIVATE N_NIMCALL(void, close__8c1w8B7fpSuB4Dgr5LHVJA)(int socket);
N_LIB_PRIVATE N_NIMCALL(void, register__BiX6jwQlPw04owns5cHAfw_4)(int fd);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, getSockOpt__bxMZV3ngojtrsh3q9ahNQyg)(int socket, NI level, NI optname, NI* value_0);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
extern int osInvalidSocket__voz9aUXu8jtRbvGZZJHNE8w;

#line 38 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, setSocketBlocking__Vt2pA9bcPxhq5Wei9cLrmQVg)(int s, NIM_BOOL blocking) {	NIM_BOOL result;	NI x_1;	int T1_;	result = (NIM_BOOL)0;
#line 46 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
	result = NIM_TRUE;
#line 47 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 47 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 47 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
	T1_ = (int)0;	T1_ = fcntl(s, ((int) 3), ((NI) 0));	x_1 = ((NI) (T1_));
#line 48 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
	{
#line 48 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		if (!(x_1 == ((NI) -1))) goto LA4_;

#line 49 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		result = NIM_FALSE;	}
	goto LA2_;
	LA4_: ;
	{		NI mode;
#line 51 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 51 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		{			if (!blocking) goto LA9_;

#line 51 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
			mode = (NI)(x_1 & ((NI) -2049));		}
		goto LA7_;
		LA9_: ;
		{
#line 51 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
			mode = (NI)(x_1 | ((NI) 2048));		}
		LA7_: ;

#line 52 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		{			int T14_;
#line 52 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 52 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 52 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
			T14_ = (int)0;			T14_ = fcntl(s, ((int) 4), mode);			if (!(T14_ == ((NI32) -1))) goto LA15_;

#line 53 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
			result = NIM_FALSE;		}
		LA15_: ;
	}
	LA2_: ;
	return result;}

#line 90 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
N_LIB_PRIVATE N_NIMCALL(int, createAsyncSocket__aqO64MBGdn1VFUxJJhwCjw)(tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg domain, tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw sockType, tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg protocol) {	int result;	int handle;{	result = (int)0;
#line 94 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 94 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
	handle = createNativeSocket__JC9abIjAA731bWpDMsti9a5Q(domain, sockType, protocol);
#line 95 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
	{
#line 95 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		if (!(handle == osInvalidSocket__voz9aUXu8jtRbvGZZJHNE8w)) goto LA3_;

#line 96 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 96 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		result = ((int) -1);		goto BeforeRet_;
	}
	LA3_: ;

#line 97 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
	{		NIM_BOOL T7_;
#line 97 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 97 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 97 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		T7_ = (NIM_BOOL)0;		T7_ = setSocketBlocking__Vt2pA9bcPxhq5Wei9cLrmQVg(handle, NIM_FALSE);		if (!!(T7_)) goto LA8_;

#line 98 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 98 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		close__8c1w8B7fpSuB4Dgr5LHVJA(handle);

#line 99 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 99 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		result = ((int) -1);		goto BeforeRet_;
	}
	LA8_: ;

#line 104 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
	result = handle;
#line 105 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 105 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
	register__BiX6jwQlPw04owns5cHAfw_4(result);
	}BeforeRet_: ;
	return result;}

#line 55 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, setSockOpt__asYSrzrcLl2JOJLLPn0Rfw)(int socket, NI level, NI optname, NI optval) {	NIM_BOOL result;	int value_1;	int T1_;	result = (NIM_BOOL)0;
#line 58 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
	if ((optval) < ((int) (-2147483647 -1)) || (optval) > ((int) 2147483647)){ raiseRangeErrorI(optval, ((int) (-2147483647 -1)), ((int) 2147483647)); }	value_1 = ((int) (optval));
#line 60 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 60 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 59 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
	if ((level) < ((int) (-2147483647 -1)) || (level) > ((int) 2147483647)){ raiseRangeErrorI(level, ((int) (-2147483647 -1)), ((int) 2147483647)); }	if ((optname) < ((int) (-2147483647 -1)) || (optname) > ((int) 2147483647)){ raiseRangeErrorI(optname, ((int) (-2147483647 -1)), ((int) 2147483647)); }
#line 59 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
	T1_ = (int)0;	T1_ = setsockopt(socket, ((int) (level)), ((int) (optname)), ((void*) ((&value_1))), ((socklen_t) 4));	result = (((int) 0) <= T1_);	return result;}

#line 107 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
N_LIB_PRIVATE N_NIMCALL(int, wrapAsyncSocket__4iacLgkl9c9arYqPJ8f7z6mg)(int sock) {	int result;{	result = (int)0;
#line 110 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
	{		NIM_BOOL T3_;
#line 110 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 110 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 110 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		T3_ = (NIM_BOOL)0;		T3_ = setSocketBlocking__Vt2pA9bcPxhq5Wei9cLrmQVg(sock, NIM_FALSE);		if (!!(T3_)) goto LA4_;

#line 111 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 111 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		close__8c1w8B7fpSuB4Dgr5LHVJA(sock);

#line 112 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 112 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		result = ((int) -1);		goto BeforeRet_;
	}
	LA4_: ;

#line 117 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
	result = sock;
#line 118 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 118 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
	register__BiX6jwQlPw04owns5cHAfw_4(result);
	}BeforeRet_: ;
	return result;}

#line 69 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, getSockOpt__bxMZV3ngojtrsh3q9ahNQyg)(int socket, NI level, NI optname, NI* value_0) {	NIM_BOOL result;	int res;	socklen_t size;	result = (NIM_BOOL)0;	res = (int)0;
#line 73 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
	size = ((socklen_t) 4);
#line 74 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
	{		int T3_;
#line 75 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 74 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		if ((level) < ((int) (-2147483647 -1)) || (level) > ((int) 2147483647)){ raiseRangeErrorI(level, ((int) (-2147483647 -1)), ((int) 2147483647)); }		if ((optname) < ((int) (-2147483647 -1)) || (optname) > ((int) 2147483647)){ raiseRangeErrorI(optname, ((int) (-2147483647 -1)), ((int) 2147483647)); }
#line 74 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		T3_ = (int)0;		T3_ = getsockopt(socket, ((int) (level)), ((int) (optname)), ((void*) ((&res))), (&size));		if (!(((int) 0) <= T3_)) goto LA4_;

#line 76 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		(*value_0) = ((NI) (res));
#line 77 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		result = NIM_TRUE;	}
	LA4_: ;
	return result;}

#line 86 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, getSocketError__ETrsq9aycvx2E9bNw0j9b3zGA)(int socket, NI* err_0) {	NIM_BOOL result;	result = (NIM_BOOL)0;
#line 88 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 88 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
	result = getSockOpt__bxMZV3ngojtrsh3q9ahNQyg(socket, ((NI) 1), ((NI) 4), err_0);	return result;}

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

#line 148 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
N_LIB_PRIVATE N_NIMCALL(tyTuple__rTI1z5tLuTbP9b133u2ve6A, createAsyncPipe__B4L56e2qekX1Z9a8ih2iRAA)(void) {	tyTuple__rTI1z5tLuTbP9b133u2ve6A result;	tyArray__SKEqGXcReU4NvbQlH779b5Q fds;	int colontmp__5;	int colontmp__6;{	nimZeroMem((void*)(&result), sizeof(tyTuple__rTI1z5tLuTbP9b133u2ve6A));	nimZeroMem((void*)fds, sizeof(tyArray__SKEqGXcReU4NvbQlH779b5Q));
#line 208 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
	{		int T3_;		int colontmp_;		int colontmp__2;
#line 208 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 208 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 208 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		T3_ = (int)0;		T3_ = pipe(fds);		if (!(T3_ == ((NI32) -1))) goto LA4_;

#line 209 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		colontmp_ = ((int) -1);
#line 209 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		colontmp__2 = ((int) -1);
#line 209 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		result.Field0 = colontmp_;		result.Field1 = colontmp__2;
#line 210 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		goto BeforeRet_;
	}
	LA4_: ;

#line 212 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
	{		NIM_BOOL T8_;		NIM_BOOL T9_;		NIM_BOOL T11_;		int colontmp__3;		int colontmp__4;
#line 212 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		T8_ = (NIM_BOOL)0;
#line 212 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 212 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 212 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		T9_ = (NIM_BOOL)0;		T9_ = setSocketBlocking__Vt2pA9bcPxhq5Wei9cLrmQVg(fds[(((NI) 0))- 0], NIM_FALSE);		T8_ = !(T9_);		if (T8_) goto LA10_;

#line 213 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 213 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"

#line 213 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		T11_ = (NIM_BOOL)0;		T11_ = setSocketBlocking__Vt2pA9bcPxhq5Wei9cLrmQVg(fds[(((NI) 1))- 0], NIM_FALSE);		T8_ = !(T11_);		LA10_: ;
		if (!T8_) goto LA12_;

#line 214 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		colontmp__3 = ((int) -1);
#line 214 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		colontmp__4 = ((int) -1);
#line 214 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		result.Field0 = colontmp__3;		result.Field1 = colontmp__4;
#line 215 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
		goto BeforeRet_;
	}
	LA12_: ;

#line 217 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
	colontmp__5 = fds[(((NI) 0))- 0];
#line 217 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
	colontmp__6 = fds[(((NI) 1))- 0];
#line 217 "/home/runner/work/nim-waku/nim-waku/vendor/nim-chronos/chronos/handles.nim"
	result.Field0 = colontmp__5;	result.Field1 = colontmp__6;	}BeforeRet_: ;
	return result;}