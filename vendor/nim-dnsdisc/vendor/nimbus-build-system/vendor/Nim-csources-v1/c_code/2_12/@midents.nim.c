/* Generated by Nim Compiler v1.0.11 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

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
typedef struct tyObject_TIdObj__iIXPrEsiKHiioLj0HSkQhA tyObject_TIdObj__iIXPrEsiKHiioLj0HSkQhA;
typedef struct RootObj RootObj;
typedef struct tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw;
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
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct RootObj {
TNimType* m_type;
};
struct tyObject_TIdObj__iIXPrEsiKHiioLj0HSkQhA {
  RootObj Sup;
NI id;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA {
  tyObject_TIdObj__iIXPrEsiKHiioLj0HSkQhA Sup;
NimStringDesc* s;
tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA* next;
NI h;
};
typedef tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA* tyArray__o8KQyTFgNQGvsJZYtdEsgA[8192];
struct tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw {
tyArray__o8KQyTFgNQGvsJZYtdEsgA buckets;
NI wordCounter;
tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA* idAnon;
tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA* idDelegator;
tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA* emptyIdent;
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
typedef NU16 tyEnum_TSpecialWord__ycbpMCRV6Cd2eBh3X9biEiw;
typedef NU16 tyEnum_TSpecialWord__HREcCSXql5vNjdyc0yvpoQ;
typedef NimStringDesc* tyArray__p8A0M9cPpD6FjwfsCYXLQtA[275];
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tyRef__B0xRsLi0eK4raPu9bd2tkcA)(void* p, NI op);
static N_NIMCALL(void, Marker_tyRef__eH2Hxsu3PVPvJHXo2xTrZw)(void* p, NI op);
static N_NIMCALL(void, Marker_tyRef__lnkYNZP9asc88UfiEGjLrbA)(void* p, NI op);
N_LIB_PRIVATE N_NIMCALL(tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA*, getIdent__jPDJlJukeiI0s9cOWXczqWg)(tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw* ic, NCSTRING identifier, NI length, NI h);
N_LIB_PRIVATE N_NIMCALL(NI, cmpExact__Jbw1CiaNJLYIkwEiKlU3qg)(NCSTRING a, NCSTRING b, NI blen);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef__AT1eRuflKWyTTBdLjEDZbg_3system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr);
static N_INLINE(void, decRef__AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, rtlAddZCT__AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT__Y66tOYFjgwJ0k4aLz4bc0Q)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NIMCALL(NI, cmpIgnoreStyle__Jbw1CiaNJLYIkwEiKlU3qg_2)(NCSTRING a, NCSTRING b, NI blen);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_LIB_PRIVATE N_NIMCALL(NI, hashIgnoreStyle__6PCYkKlCNhq9cnRLnqWKkwQ_3)(NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA*, getIdent__9coBOmdXN09be4rJvXK6fQGQ)(tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw* ic, NimStringDesc* identifier);
N_LIB_PRIVATE N_NIMCALL(tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA*, getIdent__FXltLmSJ6smaT7i9cc3lKRw)(tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw* ic, NimStringDesc* identifier, NI h);
extern TNimType NTI__ytyiCJqK439aF9cIibuRVpAg_;
TNimType NTI__iIXPrEsiKHiioLj0HSkQhA_;
extern TNimType NTI__rR5Bzr1D5krxoo1NcNyeMA_;
TNimType NTI__GufRQq9c0miSybX3zBD4tyA_;
extern TNimType NTI__77mFvmsOLKik79ci2hXkHEg_;
TNimType NTI__B0xRsLi0eK4raPu9bd2tkcA_;
TNimType NTI__eH2Hxsu3PVPvJHXo2xTrZw_;
TNimType NTI__TzLHS09bRH9a0TYLs39cqcNaw_;
TNimType NTI__o8KQyTFgNQGvsJZYtdEsgA_;
TNimType NTI__lnkYNZP9asc88UfiEGjLrbA_;
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch__IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(TM__L3r6bVdeFMiI9cwmLpWIeKw_4, ":anonymous", 10);
STRING_LITERAL(TM__L3r6bVdeFMiI9cwmLpWIeKw_5, ":delegator", 10);
extern NIM_CONST tyArray__p8A0M9cPpD6FjwfsCYXLQtA specialWords__jS3I1dUcvbZAEuApBSUHng;
static N_NIMCALL(void, Marker_tyRef__B0xRsLi0eK4raPu9bd2tkcA)(void* p, NI op) {
	tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA* a;
	a = (tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA*)p;
	nimGCvisit((void*)(*a).s, op);
	nimGCvisit((void*)(*a).next, op);
}
static N_NIMCALL(void, Marker_tyRef__eH2Hxsu3PVPvJHXo2xTrZw)(void* p, NI op) {
	tyObject_TIdObj__iIXPrEsiKHiioLj0HSkQhA* a;
	a = (tyObject_TIdObj__iIXPrEsiKHiioLj0HSkQhA*)p;
}
static N_NIMCALL(void, Marker_tyRef__lnkYNZP9asc88UfiEGjLrbA)(void* p, NI op) {
	tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw* a;
	NI T1_;
	a = (tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < 8192; T1_++) {
	nimGCvisit((void*)(*a).buckets[T1_], op);
	}
	nimGCvisit((void*)(*a).idAnon, op);
	nimGCvisit((void*)(*a).idDelegator, op);
	nimGCvisit((void*)(*a).emptyIdent, op);
}
N_LIB_PRIVATE N_NIMCALL(NI, cmpExact__Jbw1CiaNJLYIkwEiKlU3qg)(NCSTRING a, NCSTRING b, NI blen) {	NI result;
	NI i;
	NI j;
	result = (NI)0;
	i = ((NI) 0);
	j = ((NI) 0);
	result = ((NI) 1);
	{
		while (1) {
			NIM_CHAR aa;
			NIM_CHAR bb;
			if (!(j < blen)) goto LA2;
			aa = a[i];
			bb = b[j];
			result = (NI)(((NU8)(aa)) - ((NU8)(bb)));
			{
				NIM_BOOL T5_;
				T5_ = (NIM_BOOL)0;
				T5_ = !((result == ((NI) 0)));
				if (T5_) goto LA6_;
				T5_ = ((NU8)(aa) == (NU8)(0));
				LA6_: ;
				if (!T5_) goto LA7_;
				goto LA1;
			}
			LA7_: ;
			i += ((NI) 1);
			j += ((NI) 1);
		} LA2: ;
	} LA1: ;
	{
		if (!(result == ((NI) 0))) goto LA11_;
		{
			if (!!(((NU8)(a[i]) == (NU8)(0)))) goto LA15_;
			result = ((NI) 1);
		}
		LA15_: ;
	}
	LA11_: ;
	return result;
}
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s) {	NCSTRING result;
	result = (NCSTRING)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (s == NIM_NIL);
		if (T3_) goto LA4_;
		T3_ = ((*s).Sup.len == ((NI) 0));
		LA4_: ;
		if (!T3_) goto LA5_;
		result = "";
	}
	goto LA1_;
	LA5_: ;
	{
		result = ((NCSTRING) ((*s).data));
	}
	LA1_: ;
	return result;
}
static N_INLINE(void, incRef__AT1eRuflKWyTTBdLjEDZbg_3system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {	(*c).refcount = (NI)((NU32)((*c).refcount) + (NU32)(((NI) 8)));
}
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell__QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr) {	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU32)(((NI) (ptrdiff_t) (usr))) - (NU32)(((NI) 8)))));
	return result;
}
static N_INLINE(void, rtlAddZCT__AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {	addZCT__Y66tOYFjgwJ0k4aLz4bc0Q((&gch__IcYaEuuWivYAS86vFMTS3Q.zct), c);
}
static N_INLINE(void, decRef__AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {	(*c).refcount = (NI)((NU32)((*c).refcount) - (NU32)(((NI) 8)));
	{
		if (!((NU32)((*c).refcount) < (NU32)(((NI) 8)))) goto LA3_;
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
N_LIB_PRIVATE N_NIMCALL(NI, cmpIgnoreStyle__Jbw1CiaNJLYIkwEiKlU3qg_2)(NCSTRING a, NCSTRING b, NI blen) {	NI result;
	NI i;
	NI j;
{	result = (NI)0;
	{
		if (!!(((NU8)(a[((NI) 0)]) == (NU8)(b[((NI) 0)])))) goto LA3_;
		result = ((NI) 1);
		goto BeforeRet_;
	}
	LA3_: ;
	i = ((NI) 0);
	j = ((NI) 0);
	result = ((NI) 1);
	{
		while (1) {
			NIM_CHAR aa;
			NIM_CHAR bb;
			if (!(j < blen)) goto LA6;
			{
				while (1) {
					if (!((NU8)(a[i]) == (NU8)(95))) goto LA8;
					i += ((NI) 1);
				} LA8: ;
			}
			{
				while (1) {
					if (!((NU8)(b[j]) == (NU8)(95))) goto LA10;
					j += ((NI) 1);
				} LA10: ;
			}
			aa = a[i];
			bb = b[j];
			{
				NIM_BOOL T13_;
				T13_ = (NIM_BOOL)0;
				T13_ = ((NU8)(65) <= (NU8)(aa));
				if (!(T13_)) goto LA14_;
				T13_ = ((NU8)(aa) <= (NU8)(90));
				LA14_: ;
				if (!T13_) goto LA15_;
				aa = ((NIM_CHAR) (((NI) ((NI)(((NU8)(aa)) + ((NI) 32))))));
			}
			LA15_: ;
			{
				NIM_BOOL T19_;
				T19_ = (NIM_BOOL)0;
				T19_ = ((NU8)(65) <= (NU8)(bb));
				if (!(T19_)) goto LA20_;
				T19_ = ((NU8)(bb) <= (NU8)(90));
				LA20_: ;
				if (!T19_) goto LA21_;
				bb = ((NIM_CHAR) (((NI) ((NI)(((NU8)(bb)) + ((NI) 32))))));
			}
			LA21_: ;
			result = (NI)(((NU8)(aa)) - ((NU8)(bb)));
			{
				NIM_BOOL T25_;
				T25_ = (NIM_BOOL)0;
				T25_ = !((result == ((NI) 0)));
				if (T25_) goto LA26_;
				T25_ = ((NU8)(aa) == (NU8)(0));
				LA26_: ;
				if (!T25_) goto LA27_;
				goto LA5;
			}
			LA27_: ;
			i += ((NI) 1);
			j += ((NI) 1);
		} LA6: ;
	} LA5: ;
	{
		if (!(result == ((NI) 0))) goto LA31_;
		{
			if (!!(((NU8)(a[i]) == (NU8)(0)))) goto LA35_;
			result = ((NI) 1);
		}
		LA35_: ;
	}
	LA31_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA*, getIdent__jPDJlJukeiI0s9cOWXczqWg)(tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw* ic, NCSTRING identifier, NI length, NI h) {	tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA* result;
	NI idx;
	tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA* last;
	NI id;
{	result = (tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA*)0;
	idx = (NI)(h & ((NI) 8191));
	result = (*ic).buckets[(idx)- 0];
	last = NIM_NIL;
	id = ((NI) 0);
	{
		while (1) {
			if (!!((result == NIM_NIL))) goto LA2;
			{
				NI T5_;
				T5_ = (NI)0;
				T5_ = cmpExact__Jbw1CiaNJLYIkwEiKlU3qg(nimToCStringConv((*result).s), identifier, length);
				if (!(T5_ == ((NI) 0))) goto LA6_;
				{
					if (!!((last == NIM_NIL))) goto LA10_;
					asgnRef((void**) (&(*last).next), (*result).next);
					asgnRef((void**) (&(*result).next), (*ic).buckets[(idx)- 0]);
					asgnRef((void**) (&(*ic).buckets[(idx)- 0]), result);
				}
				LA10_: ;
				goto BeforeRet_;
			}
			goto LA3_;
			LA6_: ;
			{
				NI T13_;
				T13_ = (NI)0;
				T13_ = cmpIgnoreStyle__Jbw1CiaNJLYIkwEiKlU3qg_2(nimToCStringConv((*result).s), identifier, length);
				if (!(T13_ == ((NI) 0))) goto LA14_;
				id = (*result).Sup.id;
			}
			goto LA3_;
			LA14_: ;
			LA3_: ;
			last = result;
			result = (*result).next;
		} LA2: ;
	}
	result = (tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA*) newObj((&NTI__B0xRsLi0eK4raPu9bd2tkcA_), sizeof(tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA));
	(*result).Sup.Sup.m_type = (&NTI__GufRQq9c0miSybX3zBD4tyA_);
	(*result).h = h;
	asgnRef((void**) (&(*result).s), mnewString(((NI) (length))));
	{
		NI i;
		NI i_2;
		i = (NI)0;
		i_2 = ((NI) 0);
		{
			while (1) {
				if (!(i_2 < length)) goto LA18;
				i = i_2;
				(*result).s->data[i] = identifier[i];
				i_2 += ((NI) 1);
			} LA18: ;
		}
	}
	asgnRef((void**) (&(*result).next), (*ic).buckets[(idx)- 0]);
	asgnRef((void**) (&(*ic).buckets[(idx)- 0]), result);
	{
		if (!(id == ((NI) 0))) goto LA21_;
		(*ic).wordCounter += ((NI) 1);
		(*result).Sup.id = ((NI32)-((*ic).wordCounter));
	}
	goto LA19_;
	LA21_: ;
	{
		(*result).Sup.id = id;
	}
	LA19_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA*, getIdent__9coBOmdXN09be4rJvXK6fQGQ)(tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw* ic, NimStringDesc* identifier) {	tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA* result;
	NI T1_;
	result = (tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA*)0;
	T1_ = (NI)0;
	T1_ = hashIgnoreStyle__6PCYkKlCNhq9cnRLnqWKkwQ_3(identifier);
	result = getIdent__jPDJlJukeiI0s9cOWXczqWg(ic, nimToCStringConv(identifier), (identifier ? identifier->Sup.len : 0), T1_);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyEnum_TSpecialWord__ycbpMCRV6Cd2eBh3X9biEiw, whichKeyword__sZUQNPhNGEM8MllfcWvRiw)(tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA* id) {	tyEnum_TSpecialWord__ycbpMCRV6Cd2eBh3X9biEiw result;
	result = (tyEnum_TSpecialWord__ycbpMCRV6Cd2eBh3X9biEiw)0;
	{
		if (!((*id).Sup.id < ((NI) 0))) goto LA3_;
		result = ((tyEnum_TSpecialWord__ycbpMCRV6Cd2eBh3X9biEiw) 0);
	}
	goto LA1_;
	LA3_: ;
	{
		result = ((tyEnum_TSpecialWord__ycbpMCRV6Cd2eBh3X9biEiw) ((*id).Sup.id));
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA*, getIdent__FXltLmSJ6smaT7i9cc3lKRw)(tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw* ic, NimStringDesc* identifier, NI h) {	tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA* result;
	result = (tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA*)0;
	result = getIdent__jPDJlJukeiI0s9cOWXczqWg(ic, nimToCStringConv(identifier), (identifier ? identifier->Sup.len : 0), h);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw*, newIdentCache__C9aDMlmEchTc9anNE0BtBTYg)(void) {	tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw* result;
	tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw* T1_;
	result = (tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw*)0;
	T1_ = (tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw*)0;
	T1_ = (tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw*) newObj((&NTI__lnkYNZP9asc88UfiEGjLrbA_), sizeof(tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw));
	result = T1_;
	asgnRef((void**) (&(*result).idAnon), getIdent__9coBOmdXN09be4rJvXK6fQGQ(result, ((NimStringDesc*) &TM__L3r6bVdeFMiI9cwmLpWIeKw_4)));
	(*result).wordCounter = ((NI) 1);
	asgnRef((void**) (&(*result).idDelegator), getIdent__9coBOmdXN09be4rJvXK6fQGQ(result, ((NimStringDesc*) &TM__L3r6bVdeFMiI9cwmLpWIeKw_5)));
	asgnRef((void**) (&(*result).emptyIdent), getIdent__9coBOmdXN09be4rJvXK6fQGQ(result, ((NimStringDesc*) NIM_NIL)));
	{
		tyEnum_TSpecialWord__HREcCSXql5vNjdyc0yvpoQ s;
		NI res;
		s = (tyEnum_TSpecialWord__HREcCSXql5vNjdyc0yvpoQ)0;
		res = ((NI) 1);
		{
			while (1) {
				NI T5_;
				tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA* T6_;
				if (!(res <= ((NI) 274))) goto LA4;
				s = ((tyEnum_TSpecialWord__HREcCSXql5vNjdyc0yvpoQ) (res));
				T5_ = (NI)0;
				T5_ = hashIgnoreStyle__6PCYkKlCNhq9cnRLnqWKkwQ_3(specialWords__jS3I1dUcvbZAEuApBSUHng[(s)- 0]);
				T6_ = (tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA*)0;
				T6_ = getIdent__FXltLmSJ6smaT7i9cc3lKRw(result, specialWords__jS3I1dUcvbZAEuApBSUHng[(s)- 0], T5_);
				(*T6_).Sup.id = s;
				res += ((NI) 1);
			} LA4: ;
		}
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, compiler_identsDatInit000)(void) {
static TNimNode* TM__L3r6bVdeFMiI9cwmLpWIeKw_2_3[3];
static TNimNode* TM__L3r6bVdeFMiI9cwmLpWIeKw_3_5[5];
static TNimNode TM__L3r6bVdeFMiI9cwmLpWIeKw_0[11];
NTI__iIXPrEsiKHiioLj0HSkQhA_.size = sizeof(tyObject_TIdObj__iIXPrEsiKHiioLj0HSkQhA);
NTI__iIXPrEsiKHiioLj0HSkQhA_.kind = 17;
NTI__iIXPrEsiKHiioLj0HSkQhA_.base = (&NTI__ytyiCJqK439aF9cIibuRVpAg_);
NTI__iIXPrEsiKHiioLj0HSkQhA_.flags = 1;
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[0].kind = 1;
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[0].offset = offsetof(tyObject_TIdObj__iIXPrEsiKHiioLj0HSkQhA, id);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[0].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[0].name = "id";
NTI__iIXPrEsiKHiioLj0HSkQhA_.node = &TM__L3r6bVdeFMiI9cwmLpWIeKw_0[0];
NTI__GufRQq9c0miSybX3zBD4tyA_.size = sizeof(tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA);
NTI__GufRQq9c0miSybX3zBD4tyA_.kind = 17;
NTI__GufRQq9c0miSybX3zBD4tyA_.base = (&NTI__iIXPrEsiKHiioLj0HSkQhA_);
TM__L3r6bVdeFMiI9cwmLpWIeKw_2_3[0] = &TM__L3r6bVdeFMiI9cwmLpWIeKw_0[2];
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[2].kind = 1;
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[2].offset = offsetof(tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA, s);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[2].typ = (&NTI__77mFvmsOLKik79ci2hXkHEg_);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[2].name = "s";
TM__L3r6bVdeFMiI9cwmLpWIeKw_2_3[1] = &TM__L3r6bVdeFMiI9cwmLpWIeKw_0[3];
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[3].kind = 1;
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[3].offset = offsetof(tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA, next);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[3].typ = (&NTI__B0xRsLi0eK4raPu9bd2tkcA_);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[3].name = "next";
TM__L3r6bVdeFMiI9cwmLpWIeKw_2_3[2] = &TM__L3r6bVdeFMiI9cwmLpWIeKw_0[4];
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[4].kind = 1;
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[4].offset = offsetof(tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA, h);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[4].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[4].name = "h";
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[1].len = 3; TM__L3r6bVdeFMiI9cwmLpWIeKw_0[1].kind = 2; TM__L3r6bVdeFMiI9cwmLpWIeKw_0[1].sons = &TM__L3r6bVdeFMiI9cwmLpWIeKw_2_3[0];
NTI__GufRQq9c0miSybX3zBD4tyA_.node = &TM__L3r6bVdeFMiI9cwmLpWIeKw_0[1];
NTI__B0xRsLi0eK4raPu9bd2tkcA_.size = sizeof(tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA*);
NTI__B0xRsLi0eK4raPu9bd2tkcA_.kind = 22;
NTI__B0xRsLi0eK4raPu9bd2tkcA_.base = (&NTI__GufRQq9c0miSybX3zBD4tyA_);
NTI__B0xRsLi0eK4raPu9bd2tkcA_.marker = Marker_tyRef__B0xRsLi0eK4raPu9bd2tkcA;
NTI__eH2Hxsu3PVPvJHXo2xTrZw_.size = sizeof(tyObject_TIdObj__iIXPrEsiKHiioLj0HSkQhA*);
NTI__eH2Hxsu3PVPvJHXo2xTrZw_.kind = 22;
NTI__eH2Hxsu3PVPvJHXo2xTrZw_.base = (&NTI__iIXPrEsiKHiioLj0HSkQhA_);
NTI__eH2Hxsu3PVPvJHXo2xTrZw_.marker = Marker_tyRef__eH2Hxsu3PVPvJHXo2xTrZw;
NTI__TzLHS09bRH9a0TYLs39cqcNaw_.size = sizeof(tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw);
NTI__TzLHS09bRH9a0TYLs39cqcNaw_.kind = 18;
NTI__TzLHS09bRH9a0TYLs39cqcNaw_.base = 0;
TM__L3r6bVdeFMiI9cwmLpWIeKw_3_5[0] = &TM__L3r6bVdeFMiI9cwmLpWIeKw_0[6];
NTI__o8KQyTFgNQGvsJZYtdEsgA_.size = sizeof(tyArray__o8KQyTFgNQGvsJZYtdEsgA);
NTI__o8KQyTFgNQGvsJZYtdEsgA_.kind = 16;
NTI__o8KQyTFgNQGvsJZYtdEsgA_.base = (&NTI__B0xRsLi0eK4raPu9bd2tkcA_);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[6].kind = 1;
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[6].offset = offsetof(tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw, buckets);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[6].typ = (&NTI__o8KQyTFgNQGvsJZYtdEsgA_);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[6].name = "buckets";
TM__L3r6bVdeFMiI9cwmLpWIeKw_3_5[1] = &TM__L3r6bVdeFMiI9cwmLpWIeKw_0[7];
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[7].kind = 1;
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[7].offset = offsetof(tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw, wordCounter);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[7].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[7].name = "wordCounter";
TM__L3r6bVdeFMiI9cwmLpWIeKw_3_5[2] = &TM__L3r6bVdeFMiI9cwmLpWIeKw_0[8];
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[8].kind = 1;
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[8].offset = offsetof(tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw, idAnon);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[8].typ = (&NTI__B0xRsLi0eK4raPu9bd2tkcA_);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[8].name = "idAnon";
TM__L3r6bVdeFMiI9cwmLpWIeKw_3_5[3] = &TM__L3r6bVdeFMiI9cwmLpWIeKw_0[9];
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[9].kind = 1;
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[9].offset = offsetof(tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw, idDelegator);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[9].typ = (&NTI__B0xRsLi0eK4raPu9bd2tkcA_);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[9].name = "idDelegator";
TM__L3r6bVdeFMiI9cwmLpWIeKw_3_5[4] = &TM__L3r6bVdeFMiI9cwmLpWIeKw_0[10];
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[10].kind = 1;
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[10].offset = offsetof(tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw, emptyIdent);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[10].typ = (&NTI__B0xRsLi0eK4raPu9bd2tkcA_);
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[10].name = "emptyIdent";
TM__L3r6bVdeFMiI9cwmLpWIeKw_0[5].len = 5; TM__L3r6bVdeFMiI9cwmLpWIeKw_0[5].kind = 2; TM__L3r6bVdeFMiI9cwmLpWIeKw_0[5].sons = &TM__L3r6bVdeFMiI9cwmLpWIeKw_3_5[0];
NTI__TzLHS09bRH9a0TYLs39cqcNaw_.node = &TM__L3r6bVdeFMiI9cwmLpWIeKw_0[5];
NTI__lnkYNZP9asc88UfiEGjLrbA_.size = sizeof(tyObject_IdentCachecolonObjectType___TzLHS09bRH9a0TYLs39cqcNaw*);
NTI__lnkYNZP9asc88UfiEGjLrbA_.kind = 22;
NTI__lnkYNZP9asc88UfiEGjLrbA_.base = (&NTI__TzLHS09bRH9a0TYLs39cqcNaw_);
NTI__lnkYNZP9asc88UfiEGjLrbA_.marker = Marker_tyRef__lnkYNZP9asc88UfiEGjLrbA;
}

