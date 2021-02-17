/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -pthread -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace/install/usr/include -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1/src -DHAVE_CONFIG_H -DHAVE_BUILTIN_EXPECT -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/src -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/inc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/tools -DBR_USE_UNIX_TIME=1 -DBR_USE_URANDOM=1 -DBR_LE_UNALIGNED=1 -DBR_64=1  -DBR_amd64=1 -DBR_INT128=1 -march=native -g3 -Og -O3 -fno-strict-aliasing -fno-ident  -I/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib -I/home/runner/work/nim-waku/nim-waku/waku/v1/node -o nimcache/release/start_network/@m..@s..@s..@svendor@snim-stew@sstew@sbyteutils.nim.c.o nimcache/release/start_network/@m..@s..@s..@svendor@snim-stew@sstew@sbyteutils.nim.c */
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct TGenericSeq {NI len;
NI reserved;
};
struct NimStringDesc {  TGenericSeq Sup;NIM_CHAR data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
STRING_LITERAL(TM__oR0h53fhlgDVU6iPp0VfRQ_4, "0123456789abcdef", 16);

#line 113 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/byteutils.nim"
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, toHexAux__mTF3iGytPXR76nCDQ9aqz9cw)(NU8* ba, NI baLen_0) {	NimStringDesc* result;	NI sz;	NI TM__oR0h53fhlgDVU6iPp0VfRQ_2;	result = (NimStringDesc*)0;
#line 119 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/byteutils.nim"

#line 119 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/byteutils.nim"
	sz = baLen_0;
#line 120 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/byteutils.nim"

#line 120 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/byteutils.nim"

#line 120 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/byteutils.nim"
	if (nimMulInt(((NI) 2), sz, &TM__oR0h53fhlgDVU6iPp0VfRQ_2)) { raiseOverflow(); };	if (((NI)(TM__oR0h53fhlgDVU6iPp0VfRQ_2)) < ((NI) 0) || ((NI)(TM__oR0h53fhlgDVU6iPp0VfRQ_2)) > ((NI) IL64(9223372036854775807))){ raiseRangeErrorI((NI)(TM__oR0h53fhlgDVU6iPp0VfRQ_2), ((NI) 0), ((NI) IL64(9223372036854775807))); }
#line 120 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/byteutils.nim"
	result = mnewString(((NI) ((NI)(TM__oR0h53fhlgDVU6iPp0VfRQ_2))));	{		NI i;		NI i_2;		i = (NI)0;
#line 106 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/iterators_1.nim"
		i_2 = ((NI) 0);		{
#line 107 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/iterators_1.nim"
			while (1) {				NI TM__oR0h53fhlgDVU6iPp0VfRQ_3;				NI TM__oR0h53fhlgDVU6iPp0VfRQ_5;				NI TM__oR0h53fhlgDVU6iPp0VfRQ_6;				NI TM__oR0h53fhlgDVU6iPp0VfRQ_7;
#line 107 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/iterators_1.nim"
				if (!(i_2 < sz)) goto LA3;

#line 121 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/byteutils.nim"
				i = i_2;
#line 122 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/byteutils.nim"
				if (nimMulInt(((NI) 2), i, &TM__oR0h53fhlgDVU6iPp0VfRQ_3)) { raiseOverflow(); };				if ((NU)((NI)(TM__oR0h53fhlgDVU6iPp0VfRQ_3)) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2((NI)(TM__oR0h53fhlgDVU6iPp0VfRQ_3),(result ? result->Sup.len : 0)-1); }
#line 122 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/byteutils.nim"

#line 122 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/byteutils.nim"

#line 122 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/byteutils.nim"
				if ((NU)(i) >= (NU)(baLen_0)){ raiseIndexError2(i,baLen_0-1); }				if ((NU)((NU8)((NU8)((NU8)(ba[i]) >> (NU64)(((NI) 4))) & ((NU8) 15))) >= (NU)(((NimStringDesc*) &TM__oR0h53fhlgDVU6iPp0VfRQ_4) ? ((NimStringDesc*) &TM__oR0h53fhlgDVU6iPp0VfRQ_4)->Sup.len : 0)){ raiseIndexError2((NU8)((NU8)((NU8)(ba[i]) >> (NU64)(((NI) 4))) & ((NU8) 15)),(((NimStringDesc*) &TM__oR0h53fhlgDVU6iPp0VfRQ_4) ? ((NimStringDesc*) &TM__oR0h53fhlgDVU6iPp0VfRQ_4)->Sup.len : 0)-1); }				result->data[(NI)(TM__oR0h53fhlgDVU6iPp0VfRQ_3)] = ((NimStringDesc*) &TM__oR0h53fhlgDVU6iPp0VfRQ_4)->data[(NU8)((NU8)((NU8)(ba[i]) >> (NU64)(((NI) 4))) & ((NU8) 15))];
#line 123 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/byteutils.nim"

#line 123 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/byteutils.nim"
				if (nimMulInt(((NI) 2), i, &TM__oR0h53fhlgDVU6iPp0VfRQ_5)) { raiseOverflow(); };				if (nimAddInt((NI)(TM__oR0h53fhlgDVU6iPp0VfRQ_5), ((NI) 1), &TM__oR0h53fhlgDVU6iPp0VfRQ_6)) { raiseOverflow(); };				if ((NU)((NI)(TM__oR0h53fhlgDVU6iPp0VfRQ_6)) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2((NI)(TM__oR0h53fhlgDVU6iPp0VfRQ_6),(result ? result->Sup.len : 0)-1); }
#line 123 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/byteutils.nim"

#line 123 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/byteutils.nim"
				if ((NU)(i) >= (NU)(baLen_0)){ raiseIndexError2(i,baLen_0-1); }				if ((NU)((NU8)(ba[i] & ((NU8) 15))) >= (NU)(((NimStringDesc*) &TM__oR0h53fhlgDVU6iPp0VfRQ_4) ? ((NimStringDesc*) &TM__oR0h53fhlgDVU6iPp0VfRQ_4)->Sup.len : 0)){ raiseIndexError2((NU8)(ba[i] & ((NU8) 15)),(((NimStringDesc*) &TM__oR0h53fhlgDVU6iPp0VfRQ_4) ? ((NimStringDesc*) &TM__oR0h53fhlgDVU6iPp0VfRQ_4)->Sup.len : 0)-1); }				result->data[(NI)(TM__oR0h53fhlgDVU6iPp0VfRQ_6)] = ((NimStringDesc*) &TM__oR0h53fhlgDVU6iPp0VfRQ_4)->data[(NU8)(ba[i] & ((NU8) 15))];
#line 109 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/iterators_1.nim"
				if (nimAddInt(i_2, ((NI) 1), &TM__oR0h53fhlgDVU6iPp0VfRQ_7)) { raiseOverflow(); };				i_2 = (NI)(TM__oR0h53fhlgDVU6iPp0VfRQ_7);			} LA3: ;
		}
	}
	return result;}