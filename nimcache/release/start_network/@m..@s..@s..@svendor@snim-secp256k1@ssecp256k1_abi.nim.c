/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -pthread -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace/install/usr/include -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1/src -DHAVE_CONFIG_H -DHAVE_BUILTIN_EXPECT -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/src -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/inc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/tools -DBR_USE_UNIX_TIME=1 -DBR_USE_URANDOM=1 -DBR_LE_UNALIGNED=1 -DBR_64=1  -DBR_amd64=1 -DBR_INT128=1 -march=native -g3 -Og -O3 -fno-strict-aliasing -fno-ident  -I/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib -I/home/runner/work/nim-waku/nim-waku/waku/v1/node -o nimcache/release/start_network/@m..@s..@s..@svendor@snim-secp256k1@ssecp256k1_abi.nim.c.o nimcache/release/start_network/@m..@s..@s..@svendor@snim-secp256k1@ssecp256k1_abi.nim.c */
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
typedef struct tyObject_secp256k1_context__POjLS06vi9b462f9boSHL5vQ tyObject_secp256k1_context__POjLS06vi9b462f9boSHL5vQ;
typedef N_CDECL_PTR(void, tyProc__8RYdN2QhIT3ZqUB9a3h67xw) (unsigned char* output, unsigned char* x32, unsigned char* y32, void* data);
typedef N_CDECL_PTR(int, tyProc__gZv9cNjZk34ctaQVDPYTI5A) (unsigned char* nonce32, unsigned char* msg32, unsigned char* key32, unsigned char* algo16, void* data, unsigned int attempt);
extern tyObject_secp256k1_context__POjLS06vi9b462f9boSHL5vQ* secp256k1_context_no_precomp;
extern tyProc__8RYdN2QhIT3ZqUB9a3h67xw secp256k1_ecdh_hash_function_default;
N_LIB_PRIVATE tyProc__gZv9cNjZk34ctaQVDPYTI5A secp256k1_nonce_function_rfc6979__6Xo6Tu0l3QI7HI9cIOTWDXQ;
N_LIB_PRIVATE tyProc__gZv9cNjZk34ctaQVDPYTI5A secp256k1_nonce_function_default__r19cYaf3lm0OPaDJEfdI9bQA;