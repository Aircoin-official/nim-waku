/* Generated by Nim Compiler v1.0.11 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
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
typedef struct tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ;
typedef struct tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA;
typedef struct tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack__7fytPA5bBsob6See21YMRA tyObject_GcStack__7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple__ujsjpB2O9cjj3uDHsXbnSzg tyTuple__ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ {
NIM_CHAR fill;
NIM_CHAR align;
NIM_CHAR sign;
NIM_BOOL alternateForm;
NIM_BOOL padWithZero;
NI minimumWidth;
NI precision;
NIM_CHAR typ;
NI endPosition;
};
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct RootObj {
TNimType* m_type;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence__uB9b75OUPRENsBAu4AnoePA* trace;
NU raiseId;
Exception* up;
};
struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA {
  Exception Sup;
};
struct tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
};
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA {
NI a;
NI b;
};
struct tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack__7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ* tyArray__SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef NU32 tyArray__BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg* tyArray__N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray__N1u1nqOgmuJN9cSZrnMHgOQ tyArray__B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw* tyArray__lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA {
tyArray__lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* tyArray__0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw {
tyArray__0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple__ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple__ujsjpB2O9cjj3uDHsXbnSzg tyArray__LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray__LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray__SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
NU32 flBitmap;
tyArray__BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray__B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack__7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
NI zctThreshold;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ, parseStandardFormatSpecifier__VVCKI4fK6GYPxQ9cDpjISyA)(NimStringDesc* s, NI start, NIM_BOOL ignoreUnknownSuffix);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(NI, parseSaturatedNatural__hGWFPKYRsDcYFCjZLM9acZw)(NimStringDesc* s, NI* b, NI start);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
static N_INLINE(NimStringDesc*, X5BX5D___ogYTOKbgqbjPfyC123US1gsystem)(NimStringDesc* s, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA x);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA, dotdot___xNR8BVBMWzS9bXXNMikmyLgsystem)(NI a, NI b);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef__AT1eRuflKWyTTBdLjEDZbg_3system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr);
static N_INLINE(void, decRef__AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, rtlAddZCT__AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT__Y66tOYFjgwJ0k4aLz4bc0Q)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NI, nucruneLen)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NI, runeOffset__EnrqtYM0boqQqeAIRc9bdmA)(NimStringDesc* s, NI pos, NI start);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, alignString__pfisktkC9crnJPz5c4ILtRg)(NimStringDesc* s, NI minimumWidth, NIM_CHAR align, NIM_CHAR fill);
N_LIB_PRIVATE N_NIMCALL(NI, validateUtf8__gZHDHaRdP4jROav7Hun29aA)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NIM_CHAR c, NI count);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, formatInt__mfFKm9aYkQ8qj8x65rdunAg)(NI n, NI radix, tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ* spec);
static N_INLINE(NimStringDesc*, mkDigit__MPiQ66k9cc3im5NcFk1Mg9cwstrformat)(NI v, NIM_CHAR typ);
N_NIMCALL(NimStringDesc*, nimCharToStr)(NIM_CHAR x);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
extern TNimType NTI__Ie1m0dv1ZHg72IgPRr1cDw_;
extern TNimType NTI__yoNlBGx0D2tRizIdhQuENw_;
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch__IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(TM__qDXzsifTQdn8ucTam9cFp4w_2, "invalid format string, cannot parse: ", 37);
STRING_LITERAL(TM__qDXzsifTQdn8ucTam9cFp4w_3, "invalid type in format string for string, expected \'s\', but got"
" ", 64);
STRING_LITERAL(TM__qDXzsifTQdn8ucTam9cFp4w_4, "invalid type in format string for number, expected one  of \'x\',"
" \'X\', \'b\', \'d\', \'o\' but got: ", 92);
STRING_LITERAL(TM__qDXzsifTQdn8ucTam9cFp4w_5, "0x", 2);
STRING_LITERAL(TM__qDXzsifTQdn8ucTam9cFp4w_6, "0b", 2);
STRING_LITERAL(TM__qDXzsifTQdn8ucTam9cFp4w_7, "0o", 2);
STRING_LITERAL(TM__qDXzsifTQdn8ucTam9cFp4w_8, "0", 1);
STRING_LITERAL(TM__qDXzsifTQdn8ucTam9cFp4w_9, "-", 1);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {	nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
}
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size) {	nimCopyMem(dest, source, size);
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {	{
		if (!!((src == NIM_NIL))) goto LA3_;
		copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(((void*) ((&(*dest).data[(*dest).Sup.len]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}
static N_INLINE(NimStringDesc*, X5BX5D___ogYTOKbgqbjPfyC123US1gsystem)(NimStringDesc* s, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA x) {	NimStringDesc* result;
	NI a;
	NI L;
	result = (NimStringDesc*)0;
	a = x.a;
	L = (NI)((NI)((NI)((s ? s->Sup.len : 0) - x.b) - a) + ((NI) 1));
	result = mnewString(((NI) (L)));
	{
		NI i;
		NI i_2;
		i = (NI)0;
		i_2 = ((NI) 0);
		{
			while (1) {
				if (!(i_2 < L)) goto LA3;
				i = i_2;
				result->data[i] = s->data[(NI)(i + a)];
				i_2 += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA, dotdot___xNR8BVBMWzS9bXXNMikmyLgsystem)(NI a, NI b) {	tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA result;
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
	result.a = a;
	result.b = b;
	return result;
}
static N_INLINE(void, incRef__AT1eRuflKWyTTBdLjEDZbg_3system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
}
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr) {	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI) 16)))));
	return result;
}
static N_INLINE(void, rtlAddZCT__AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {	addZCT__Y66tOYFjgwJ0k4aLz4bc0Q((&gch__IcYaEuuWivYAS86vFMTS3Q.zct), c);
}
static N_INLINE(void, decRef__AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {	(*c).refcount = (NI)((NU64)((*c).refcount) - (NU64)(((NI) 8)));
	{
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		rtlAddZCT__AT1eRuflKWyTTBdLjEDZbg_2system(c);
	}
	LA3_: ;
}
static N_INLINE(void, asgnRef)(void** dest, void* src) {	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem(src);
		incRef__AT1eRuflKWyTTBdLjEDZbg_3system(T5_);
	}
	LA3_: ;
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem((*dest));
		decRef__AT1eRuflKWyTTBdLjEDZbgsystem(T10_);
	}
	LA8_: ;
	(*dest) = src;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ, parseStandardFormatSpecifier__VVCKI4fK6GYPxQ9cDpjISyA)(NimStringDesc* s, NI start, NIM_BOOL ignoreUnknownSuffix) {	tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ result;
	NI i;
	NI parsedLength;
	nimZeroMem((void*)(&result), sizeof(tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ));
	result.fill = 32;
	result.align = 0;
	result.sign = 45;
	i = start;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = ((NI)(i + ((NI) 1)) < (s ? s->Sup.len : 0));
		if (!(T3_)) goto LA4_;
		T3_ = (((NU8)(s->data[(NI)(i + ((NI) 1))])) == ((NU8)(60)) || ((NU8)(s->data[(NI)(i + ((NI) 1))])) == ((NU8)(62)) || ((NU8)(s->data[(NI)(i + ((NI) 1))])) == ((NU8)(94)));
		LA4_: ;
		if (!T3_) goto LA5_;
		result.fill = s->data[i];
		result.align = s->data[(NI)(i + ((NI) 1))];
		i += ((NI) 2);
	}
	goto LA1_;
	LA5_: ;
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = (i < (s ? s->Sup.len : 0));
		if (!(T8_)) goto LA9_;
		T8_ = (((NU8)(s->data[i])) == ((NU8)(60)) || ((NU8)(s->data[i])) == ((NU8)(62)) || ((NU8)(s->data[i])) == ((NU8)(94)));
		LA9_: ;
		if (!T8_) goto LA10_;
		result.align = s->data[i];
		i += ((NI) 1);
	}
	goto LA1_;
	LA10_: ;
	LA1_: ;
	{
		NIM_BOOL T14_;
		T14_ = (NIM_BOOL)0;
		T14_ = (i < (s ? s->Sup.len : 0));
		if (!(T14_)) goto LA15_;
		T14_ = (((NU8)(s->data[i])) == ((NU8)(45)) || ((NU8)(s->data[i])) == ((NU8)(43)) || ((NU8)(s->data[i])) == ((NU8)(32)));
		LA15_: ;
		if (!T14_) goto LA16_;
		result.sign = s->data[i];
		i += ((NI) 1);
	}
	LA16_: ;
	{
		NIM_BOOL T20_;
		T20_ = (NIM_BOOL)0;
		T20_ = (i < (s ? s->Sup.len : 0));
		if (!(T20_)) goto LA21_;
		T20_ = ((NU8)(s->data[i]) == (NU8)(35));
		LA21_: ;
		if (!T20_) goto LA22_;
		result.alternateForm = NIM_TRUE;
		i += ((NI) 1);
	}
	LA22_: ;
	{
		NIM_BOOL T26_;
		NIM_BOOL T27_;
		T26_ = (NIM_BOOL)0;
		T27_ = (NIM_BOOL)0;
		T27_ = ((NI)(i + ((NI) 1)) < (s ? s->Sup.len : 0));
		if (!(T27_)) goto LA28_;
		T27_ = ((NU8)(s->data[i]) == (NU8)(48));
		LA28_: ;
		T26_ = T27_;
		if (!(T26_)) goto LA29_;
		T26_ = (((NU8)(s->data[(NI)(i + ((NI) 1))])) >= ((NU8)(48)) && ((NU8)(s->data[(NI)(i + ((NI) 1))])) <= ((NU8)(57)));
		LA29_: ;
		if (!T26_) goto LA30_;
		result.padWithZero = NIM_TRUE;
		i += ((NI) 1);
	}
	LA30_: ;
	parsedLength = parseSaturatedNatural__hGWFPKYRsDcYFCjZLM9acZw(s, (&result.minimumWidth), i);
	i += parsedLength;
	{
		NIM_BOOL T34_;
		NI parsedLengthB;
		T34_ = (NIM_BOOL)0;
		T34_ = (i < (s ? s->Sup.len : 0));
		if (!(T34_)) goto LA35_;
		T34_ = ((NU8)(s->data[i]) == (NU8)(46));
		LA35_: ;
		if (!T34_) goto LA36_;
		i += ((NI) 1);
		parsedLengthB = parseSaturatedNatural__hGWFPKYRsDcYFCjZLM9acZw(s, (&result.precision), i);
		i += parsedLengthB;
	}
	goto LA32_;
	LA36_: ;
	{
		result.precision = ((NI) -1);
	}
	LA32_: ;
	{
		NIM_BOOL T41_;
		T41_ = (NIM_BOOL)0;
		T41_ = (i < (s ? s->Sup.len : 0));
		if (!(T41_)) goto LA42_;
		T41_ = (((NU8)(s->data[i])) >= ((NU8)(65)) && ((NU8)(s->data[i])) <= ((NU8)(90)) || ((NU8)(s->data[i])) >= ((NU8)(97)) && ((NU8)(s->data[i])) <= ((NU8)(122)));
		LA42_: ;
		if (!T41_) goto LA43_;
		result.typ = s->data[i];
		i += ((NI) 1);
	}
	LA43_: ;
	result.endPosition = i;
	{
		NIM_BOOL T47_;
		tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw* eX60gensym373460_;
		NimStringDesc* T51_;
		tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA T52_;
		NimStringDesc* T53_;
		T47_ = (NIM_BOOL)0;
		T47_ = !((i == (s ? s->Sup.len : 0)));
		if (!(T47_)) goto LA48_;
		T47_ = !(ignoreUnknownSuffix);
		LA48_: ;
		if (!T47_) goto LA49_;
		eX60gensym373460_ = (tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw*)0;
		eX60gensym373460_ = (tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw*) newObj((&NTI__Ie1m0dv1ZHg72IgPRr1cDw_), sizeof(tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw));
		(*eX60gensym373460_).Sup.Sup.Sup.m_type = (&NTI__yoNlBGx0D2tRizIdhQuENw_);
		(*eX60gensym373460_).Sup.Sup.name = "ValueError";
		T51_ = (NimStringDesc*)0;
		T52_ = dotdot___xNR8BVBMWzS9bXXNMikmyLgsystem(i, ((NI) 1));
		T53_ = (NimStringDesc*)0;
		T53_ = X5BX5D___ogYTOKbgqbjPfyC123US1gsystem(s, T52_);
		T51_ = rawNewString((T53_ ? T53_->Sup.len : 0) + 37);
appendString(T51_, ((NimStringDesc*) &TM__qDXzsifTQdn8ucTam9cFp4w_2));
appendString(T51_, T53_);
		asgnRef((void**) (&(*eX60gensym373460_).Sup.Sup.message), T51_);
		asgnRef((void**) (&(*eX60gensym373460_).Sup.Sup.parent), NIM_NIL);
		raiseExceptionEx((Exception*)eX60gensym373460_, "ValueError", "parseStandardFormatSpecifier", "strformat.nim", 417);
	}
	LA49_: ;
	return result;
}
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {	(*dest).data[(*dest).Sup.len] = c;
	(*dest).data[(NI)((*dest).Sup.len + ((NI) 1))] = 0;
	(*dest).Sup.len += ((NI) 1);
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, alignString__pfisktkC9crnJPz5c4ILtRg)(NimStringDesc* s, NI minimumWidth, NIM_CHAR align, NIM_CHAR fill) {	NimStringDesc* result;
	result = (NimStringDesc*)0;
	{
		if (!(minimumWidth == ((NI) 0))) goto LA3_;
		result = copyString(s);
	}
	goto LA1_;
	LA3_: ;
	{
		NI sRuneLen;
		NI toFill;
		{
			NI T8_;
			T8_ = (NI)0;
			T8_ = validateUtf8__gZHDHaRdP4jROav7Hun29aA(s);
			if (!(T8_ == ((NI) -1))) goto LA9_;
			sRuneLen = nucruneLen(s);
		}
		goto LA6_;
		LA9_: ;
		{
			sRuneLen = (s ? s->Sup.len : 0);
		}
		LA6_: ;
		toFill = (NI)(minimumWidth - sRuneLen);
		{
			if (!(toFill <= ((NI) 0))) goto LA14_;
			result = copyString(s);
		}
		goto LA12_;
		LA14_: ;
		{
			NIM_BOOL T17_;
			NimStringDesc* T21_;
			NimStringDesc* T22_;
			T17_ = (NIM_BOOL)0;
			T17_ = ((NU8)(align) == (NU8)(60));
			if (T17_) goto LA18_;
			T17_ = ((NU8)(align) == (NU8)(0));
			LA18_: ;
			if (!T17_) goto LA19_;
			T21_ = (NimStringDesc*)0;
			T22_ = (NimStringDesc*)0;
			T22_ = nsuRepeatChar(fill, ((NI) (toFill)));
			T21_ = rawNewString((s ? s->Sup.len : 0) + (T22_ ? T22_->Sup.len : 0) + 0);
appendString(T21_, s);
appendString(T21_, T22_);
			result = T21_;
		}
		goto LA12_;
		LA19_: ;
		{
			NI half;
			NimStringDesc* T26_;
			NimStringDesc* T27_;
			NimStringDesc* T28_;
			if (!((NU8)(align) == (NU8)(94))) goto LA24_;
			half = (NI)(toFill / ((NI) 2));
			T26_ = (NimStringDesc*)0;
			T27_ = (NimStringDesc*)0;
			T27_ = nsuRepeatChar(fill, ((NI) (half)));
			T28_ = (NimStringDesc*)0;
			T28_ = nsuRepeatChar(fill, ((NI) ((NI)(toFill - half))));
			T26_ = rawNewString((T27_ ? T27_->Sup.len : 0) + (s ? s->Sup.len : 0) + (T28_ ? T28_->Sup.len : 0) + 0);
appendString(T26_, T27_);
appendString(T26_, s);
appendString(T26_, T28_);
			result = T26_;
		}
		goto LA12_;
		LA24_: ;
		{
			NimStringDesc* T30_;
			NimStringDesc* T31_;
			T30_ = (NimStringDesc*)0;
			T31_ = (NimStringDesc*)0;
			T31_ = nsuRepeatChar(fill, ((NI) (toFill)));
			T30_ = rawNewString((T31_ ? T31_->Sup.len : 0) + (s ? s->Sup.len : 0) + 0);
appendString(T30_, T31_);
appendString(T30_, s);
			result = T30_;
		}
		LA12_: ;
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, formatValue__3zjq9csYPBcIN7AqvyU5ZLA)(NimStringDesc** result, NimStringDesc* value, NimStringDesc* specifier) {	tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ spec;
	NimStringDesc* value_2;
	NimStringDesc* T14_;
	spec = parseStandardFormatSpecifier__VVCKI4fK6GYPxQ9cDpjISyA(specifier, ((NI) 0), NIM_FALSE);
	value_2 = copyString(value);
	switch (((NU8)(spec.typ))) {
	case 115:
	case 0:
	{
	}
	break;
	default:
	{
		tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw* eX60gensym373698_;
		NimStringDesc* T3_;
		eX60gensym373698_ = (tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw*)0;
		eX60gensym373698_ = (tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw*) newObj((&NTI__Ie1m0dv1ZHg72IgPRr1cDw_), sizeof(tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw));
		(*eX60gensym373698_).Sup.Sup.Sup.m_type = (&NTI__yoNlBGx0D2tRizIdhQuENw_);
		(*eX60gensym373698_).Sup.Sup.name = "ValueError";
		T3_ = (NimStringDesc*)0;
		T3_ = rawNewString(65);
appendString(T3_, ((NimStringDesc*) &TM__qDXzsifTQdn8ucTam9cFp4w_3));
appendChar(T3_, spec.typ);
		asgnRef((void**) (&(*eX60gensym373698_).Sup.Sup.message), T3_);
		asgnRef((void**) (&(*eX60gensym373698_).Sup.Sup.parent), NIM_NIL);
		raiseExceptionEx((Exception*)eX60gensym373698_, "ValueError", "formatValue", "strformat.nim", 507);
	}
	break;
	}
	{
		if (!!((spec.precision == ((NI) -1)))) goto LA6_;
		{
			NI T10_;
			NI T13_;
			T10_ = (NI)0;
			T10_ = nucruneLen(value_2);
			if (!(spec.precision < T10_)) goto LA11_;
			T13_ = (NI)0;
			T13_ = runeOffset__EnrqtYM0boqQqeAIRc9bdmA(value_2, ((NI) (spec.precision)), ((NI) 0));
			value_2 = setLengthStr(value_2, ((NI) (T13_)));
		}
		LA11_: ;
	}
	LA6_: ;
	T14_ = (NimStringDesc*)0;
	T14_ = alignString__pfisktkC9crnJPz5c4ILtRg(value_2, spec.minimumWidth, spec.align, spec.fill);
	unsureAsgnRef((void**) (&(*result)), resizeString((*result), (T14_ ? T14_->Sup.len : 0) + 0));
appendString((*result), T14_);
}
static N_INLINE(NimStringDesc*, mkDigit__MPiQ66k9cc3im5NcFk1Mg9cwstrformat)(NI v, NIM_CHAR typ) {	NimStringDesc* result;
	result = (NimStringDesc*)0;
	{
		if (!(v < ((NI) 10))) goto LA3_;
		result = nimCharToStr(((NIM_CHAR) (((NI) ((NI)(((NI) 48) + v))))));
	}
	goto LA1_;
	LA3_: ;
	{
		NIM_CHAR T6_;
		T6_ = (NIM_CHAR)0;
		{
			if (!((NU8)(typ) == (NU8)(120))) goto LA9_;
			T6_ = 97;
		}
		goto LA7_;
		LA9_: ;
		{
			T6_ = 65;
		}
		LA7_: ;
		result = nimCharToStr(((NIM_CHAR) (((NI) ((NI)((NI)(((NU8)(T6_)) + v) - ((NI) 10)))))));
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, formatInt__mfFKm9aYkQ8qj8x65rdunAg)(NI n, NI radix, tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ* spec) {	NimStringDesc* result;
	NI64 v;
	NIM_BOOL negative;
	NimStringDesc* xx;
	result = (NimStringDesc*)0;
	v = ((NI64) (n));
	negative = (v < IL64(0));
	{
		if (!negative) goto LA3_;
		v = (NI64)(v * IL64(-1));
	}
	LA3_: ;
	xx = ((NimStringDesc*) NIM_NIL);
	{
		if (!(*spec).alternateForm) goto LA7_;
		switch (((NU8)((*spec).typ))) {
		case 88:
		{
			xx = copyString(((NimStringDesc*) &TM__qDXzsifTQdn8ucTam9cFp4w_5));
		}
		break;
		case 120:
		{
			xx = copyString(((NimStringDesc*) &TM__qDXzsifTQdn8ucTam9cFp4w_5));
		}
		break;
		case 98:
		{
			xx = copyString(((NimStringDesc*) &TM__qDXzsifTQdn8ucTam9cFp4w_6));
		}
		break;
		case 111:
		{
			xx = copyString(((NimStringDesc*) &TM__qDXzsifTQdn8ucTam9cFp4w_7));
		}
		break;
		default:
		{
		}
		break;
		}
	}
	LA7_: ;
	{
		if (!(v == IL64(0))) goto LA16_;
		result = copyString(((NimStringDesc*) &TM__qDXzsifTQdn8ucTam9cFp4w_8));
	}
	goto LA14_;
	LA16_: ;
	{
		result = ((NimStringDesc*) NIM_NIL);
		{
			while (1) {
				NI64 d;
				NimStringDesc* T21_;
				if (!(IL64(0) < v)) goto LA20;
				d = (NI64)(v % ((NI64) (radix)));
				v = (NI64)(v / ((NI64) (radix)));
				T21_ = (NimStringDesc*)0;
				T21_ = mkDigit__MPiQ66k9cc3im5NcFk1Mg9cwstrformat(((NI) (d)), (*spec).typ);
				result = resizeString(result, (T21_ ? T21_->Sup.len : 0) + 0);
appendString(result, T21_);
			} LA20: ;
		}
		{
			NI idx;
			NI colontmp_;
			NI i;
			idx = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = (NI)((result ? result->Sup.len : 0) / ((NI) 2));
			i = ((NI) 0);
			{
				while (1) {
					NIM_CHAR T25_;
					if (!(i < colontmp_)) goto LA24;
					idx = i;
					T25_ = (NIM_CHAR)0;
					T25_ = result->data[idx];
					result->data[idx] = result->data[(NI)((NI)((result ? result->Sup.len : 0) - idx) - ((NI) 1))];
					result->data[(NI)((NI)((result ? result->Sup.len : 0) - idx) - ((NI) 1))] = T25_;
					i += ((NI) 1);
				} LA24: ;
			}
		}
	}
	LA14_: ;
	{
		NIM_BOOL sign;
		NIM_BOOL T30_;
		NI toFill;
		if (!(*spec).padWithZero) goto LA28_;
		T30_ = (NIM_BOOL)0;
		T30_ = negative;
		if (T30_) goto LA31_;
		T30_ = !(((NU8)((*spec).sign) == (NU8)(45)));
		LA31_: ;
		sign = T30_;
		toFill = (NI)((NI)((NI)((*spec).minimumWidth - (result ? result->Sup.len : 0)) - (xx ? xx->Sup.len : 0)) - sign);
		{
			NimStringDesc* T36_;
			NimStringDesc* T37_;
			if (!(((NI) 0) < toFill)) goto LA34_;
			T36_ = (NimStringDesc*)0;
			T37_ = (NimStringDesc*)0;
			T37_ = nsuRepeatChar(48, ((NI) (toFill)));
			T36_ = rawNewString((T37_ ? T37_->Sup.len : 0) + (result ? result->Sup.len : 0) + 0);
appendString(T36_, T37_);
appendString(T36_, result);
			result = T36_;
		}
		LA34_: ;
	}
	LA28_: ;
	{
		NimStringDesc* T42_;
		if (!negative) goto LA40_;
		T42_ = (NimStringDesc*)0;
		T42_ = rawNewString((xx ? xx->Sup.len : 0) + (result ? result->Sup.len : 0) + 1);
appendString(T42_, ((NimStringDesc*) &TM__qDXzsifTQdn8ucTam9cFp4w_9));
appendString(T42_, xx);
appendString(T42_, result);
		result = T42_;
	}
	goto LA38_;
	LA40_: ;
	{
		NimStringDesc* T46_;
		if (!!(((NU8)((*spec).sign) == (NU8)(45)))) goto LA44_;
		T46_ = (NimStringDesc*)0;
		T46_ = rawNewString((xx ? xx->Sup.len : 0) + (result ? result->Sup.len : 0) + 1);
appendChar(T46_, (*spec).sign);
appendString(T46_, xx);
appendString(T46_, result);
		result = T46_;
	}
	goto LA38_;
	LA44_: ;
	{
		NimStringDesc* T48_;
		T48_ = (NimStringDesc*)0;
		T48_ = rawNewString((xx ? xx->Sup.len : 0) + (result ? result->Sup.len : 0) + 0);
appendString(T48_, xx);
appendString(T48_, result);
		result = T48_;
	}
	LA38_: ;
	{
		if (!((NU8)((*spec).align) == (NU8)(60))) goto LA51_;
		{
			NI i_2;
			NI colontmp__2;
			NI i_3;
			i_2 = (NI)0;
			colontmp__2 = (NI)0;
			colontmp__2 = (result ? result->Sup.len : 0);
			i_3 = colontmp__2;
			{
				while (1) {
					if (!(i_3 < (*spec).minimumWidth)) goto LA55;
					i_2 = i_3;
					result = addChar(result, (*spec).fill);
					i_3 += ((NI) 1);
				} LA55: ;
			}
		}
	}
	goto LA49_;
	LA51_: ;
	{
		NI toFill_2;
		toFill_2 = (NI)((*spec).minimumWidth - (result ? result->Sup.len : 0));
		{
			NI half;
			NimStringDesc* T61_;
			NimStringDesc* T62_;
			NimStringDesc* T63_;
			if (!((NU8)((*spec).align) == (NU8)(94))) goto LA59_;
			half = (NI)(toFill_2 / ((NI) 2));
			T61_ = (NimStringDesc*)0;
			T62_ = (NimStringDesc*)0;
			T62_ = nsuRepeatChar((*spec).fill, ((NI) (half)));
			T63_ = (NimStringDesc*)0;
			T63_ = nsuRepeatChar((*spec).fill, ((NI) ((NI)(toFill_2 - half))));
			T61_ = rawNewString((T62_ ? T62_->Sup.len : 0) + (result ? result->Sup.len : 0) + (T63_ ? T63_->Sup.len : 0) + 0);
appendString(T61_, T62_);
appendString(T61_, result);
appendString(T61_, T63_);
			result = T61_;
		}
		goto LA57_;
		LA59_: ;
		{
			{
				NimStringDesc* T69_;
				NimStringDesc* T70_;
				if (!(((NI) 0) < toFill_2)) goto LA67_;
				T69_ = (NimStringDesc*)0;
				T70_ = (NimStringDesc*)0;
				T70_ = nsuRepeatChar((*spec).fill, ((NI) (toFill_2)));
				T69_ = rawNewString((T70_ ? T70_->Sup.len : 0) + (result ? result->Sup.len : 0) + 0);
appendString(T69_, T70_);
appendString(T69_, result);
				result = T69_;
			}
			LA67_: ;
		}
		LA57_: ;
	}
	LA49_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, formatValue__ACNJL1q6Oxfvi53i9bkeK6Q)(NimStringDesc** result, NI value, NimStringDesc* specifier) {	tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ spec;
	NI radix;
	NimStringDesc* T12_;
{	{
		NimStringDesc* T5_;
		if (!((specifier ? specifier->Sup.len : 0) == ((NI) 0))) goto LA3_;
		T5_ = (NimStringDesc*)0;
		T5_ = nimIntToStr(value);
		unsureAsgnRef((void**) (&(*result)), resizeString((*result), (T5_ ? T5_->Sup.len : 0) + 0));
appendString((*result), T5_);
		goto BeforeRet_;
	}
	LA3_: ;
	spec = parseStandardFormatSpecifier__VVCKI4fK6GYPxQ9cDpjISyA(specifier, ((NI) 0), NIM_FALSE);
	radix = ((NI) 10);
	switch (((NU8)(spec.typ))) {
	case 120:
	case 88:
	{
		radix = ((NI) 16);
	}
	break;
	case 100:
	case 0:
	{
	}
	break;
	case 98:
	{
		radix = ((NI) 2);
	}
	break;
	case 111:
	{
		radix = ((NI) 8);
	}
	break;
	default:
	{
		tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw* eX60gensym381220_;
		NimStringDesc* T11_;
		eX60gensym381220_ = (tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw*)0;
		eX60gensym381220_ = (tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw*) newObj((&NTI__Ie1m0dv1ZHg72IgPRr1cDw_), sizeof(tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw));
		(*eX60gensym381220_).Sup.Sup.Sup.m_type = (&NTI__yoNlBGx0D2tRizIdhQuENw_);
		(*eX60gensym381220_).Sup.Sup.name = "ValueError";
		T11_ = (NimStringDesc*)0;
		T11_ = rawNewString(93);
appendString(T11_, ((NimStringDesc*) &TM__qDXzsifTQdn8ucTam9cFp4w_4));
appendChar(T11_, spec.typ);
		asgnRef((void**) (&(*eX60gensym381220_).Sup.Sup.message), T11_);
		asgnRef((void**) (&(*eX60gensym381220_).Sup.Sup.parent), NIM_NIL);
		raiseExceptionEx((Exception*)eX60gensym381220_, "ValueError", "formatValue", "strformat.nim", 436);
	}
	break;
	}
	T12_ = (NimStringDesc*)0;
	T12_ = formatInt__mfFKm9aYkQ8qj8x65rdunAg(value, radix, (&spec));
	unsureAsgnRef((void**) (&(*result)), resizeString((*result), (T12_ ? T12_->Sup.len : 0) + 0));
appendString((*result), T12_);
	}BeforeRet_: ;
}
