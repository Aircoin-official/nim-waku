/* Generated by Nim Compiler v0.19.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
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
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg;
typedef struct RootObj RootObj;
typedef struct tySequence_xv3aaFd3JCw8NbmALHiezQ tySequence_xv3aaFd3JCw8NbmALHiezQ;
typedef struct tyTuple_sPaDkVPSC0MkcoXCxPH9ccA tyTuple_sPaDkVPSC0MkcoXCxPH9ccA;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct tyObject_KeyError_nRD4SGrdQPt47sk7LIklpA tyObject_KeyError_nRD4SGrdQPt47sk7LIklpA;
typedef struct tyObject_ValueError_5aqBlilCK53e9cDu4kUyN5Q tyObject_ValueError_5aqBlilCK53e9cDu4kUyN5Q;
typedef struct tyObject_Defect_LbeSGvgPzGzXnW9caIkJqMA tyObject_Defect_LbeSGvgPzGzXnW9caIkJqMA;
typedef struct Exception Exception;
typedef struct tySequence_uB9b75OUPRENsBAu4AnoePA tySequence_uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA;
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct RootObj {
TNimType* m_type;
};
typedef NU8 tyEnum_StringTableMode_G9c4wVDFIzf0xHmQvxso9a9cQ;
struct tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg {
  RootObj Sup;
NI counter;
tySequence_xv3aaFd3JCw8NbmALHiezQ* data;
tyEnum_StringTableMode_G9c4wVDFIzf0xHmQvxso9a9cQ mode;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyTuple_sPaDkVPSC0MkcoXCxPH9ccA {
NimStringDesc* Field0;
NimStringDesc* Field1;
NIM_BOOL Field2;
};
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef NU32 tyArray_BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* tyArray_N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray_N1u1nqOgmuJN9cSZrnMHgOQ tyArray_B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {
tyArray_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {
tyArray_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray_LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
NU32 flBitmap;
tyArray_BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray_B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence_uB9b75OUPRENsBAu4AnoePA* trace;
NU raise_id;
Exception* up;
};
struct tyObject_Defect_LbeSGvgPzGzXnW9caIkJqMA {
  Exception Sup;
};
struct tyObject_ValueError_5aqBlilCK53e9cDu4kUyN5Q {
  tyObject_Defect_LbeSGvgPzGzXnW9caIkJqMA Sup;
};
struct tyObject_KeyError_nRD4SGrdQPt47sk7LIklpA {
  tyObject_ValueError_5aqBlilCK53e9cDu4kUyN5Q Sup;
};
typedef NU8 tySet_tyEnum_FormatFlag_F4vlKAV4d0Kt9aXmu9cVNBrg;
typedef NU8 tyEnum_FormatFlag_F4vlKAV4d0Kt9aXmu9cVNBrg;
struct tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tySequence_xv3aaFd3JCw8NbmALHiezQ {
  TGenericSeq Sup;
  tyTuple_sPaDkVPSC0MkcoXCxPH9ccA data[SEQ_DECL_SIZE];
};
struct tySequence_uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tySequence_xv3aaFd3JCw8NbmALHiezQ)(void* p, NI op);
static N_NIMCALL(void, Marker_tyRef_n9cmoMXcDs47wYDFGEXuCfw)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_LIB_PRIVATE N_NIMCALL(NI, rawGet_j2b5ExM8jHC3fdJfR8v9aMw)(tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringDesc* key);
N_LIB_PRIVATE N_NIMCALL(NI, myhash_j2b5ExM8jHC3fdJfR8v9aMw_2)(tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringDesc* key);
N_LIB_PRIVATE N_NIMCALL(NI, hash_uBstFm5SYVQeOL3j9c9bc58A)(NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(NI, hashIgnoreCase_uBstFm5SYVQeOL3j9c9bc58A_2)(NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(NI, hashIgnoreStyle_uBstFm5SYVQeOL3j9c9bc58A_3)(NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, myCmp_as9bkyBfpSJDtryRTEgMhcg)(tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringDesc* a, NimStringDesc* b);
N_LIB_PRIVATE N_NIMCALL(NI, cmp_xEnKsp9cfvO7Do9cTYXo8eJw)(NimStringDesc* x, NimStringDesc* y);
N_LIB_PRIVATE N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* a, NimStringDesc* b);
N_LIB_PRIVATE N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NI, nextTry_4tI2vxIqcy1tNTBufKNbkgstrtabs)(NI h, NI maxHash);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, mustRehash_K02IbeDTRFZ9b4m0M4Kahlg)(NI length, NI counter);
N_LIB_PRIVATE N_NIMCALL(void, enlarge_FXZDHKcgdiC22y7FlOWZOQ)(tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* t);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_LIB_PRIVATE N_NIMCALL(void, rawInsert_XSijCUNMoyDFcaS9bIkWTUQ)(tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* t, tySequence_xv3aaFd3JCw8NbmALHiezQ** data, NimStringDesc* key, NimStringDesc* val);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, getValue_4FxACgRMhRTaH9axGj4POzA)(tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* t, tySet_tyEnum_FormatFlag_F4vlKAV4d0Kt9aXmu9cVNBrg flags, NimStringDesc* key);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nsthasKey)(tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringDesc* key);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, getOrDefault_H9ck9bJDr0wy9bImHhMsTWhpw)(tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringDesc* key, NimStringDesc* default_0);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, getEnv_9b1nh9cAHhSLlHOPz8lCk5FA)(NimStringDesc* key, NimStringDesc* default_0);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(void, raiseFormatException_UlRj9cCVaVq3wqa9ckfyqy9cQ)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, substr_TWXUwbnq0SWWvDLfr8LXYw)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
extern TNimType NTI_ytyiCJqK439aF9cIibuRVpAg_;
TNimType NTI_V5PVrt9bIxZEeV7lfvqqtNg_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
TNimType NTI_sPaDkVPSC0MkcoXCxPH9ccA_;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
extern TNimType NTI_VaVACK0bpYmqIQ0mKcHfQQ_;
TNimType NTI_xv3aaFd3JCw8NbmALHiezQ_;
TNimType NTI_G9c4wVDFIzf0xHmQvxso9a9cQ_;
TNimType NTI_n9cmoMXcDs47wYDFGEXuCfw_;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
extern TNimType NTI_nuL5K2f5u8HXdjAg35PVfw_;
extern TNimType NTI_nRD4SGrdQPt47sk7LIklpA_;
extern TNimType NTI_yQYk49cCS1VAqkplQuc6KdQ_;
extern TNimType NTI_5aqBlilCK53e9cDu4kUyN5Q_;
STRING_LITERAL(TM_ZT9crccxweoChVXn9cHcxIXQ_7, "key not found: ", 15);
STRING_LITERAL(TM_ZT9crccxweoChVXn9cHcxIXQ_8, "format string: key not found: ", 30);
static N_NIMCALL(void, Marker_tySequence_xv3aaFd3JCw8NbmALHiezQ)(void* p, NI op) {
	tySequence_xv3aaFd3JCw8NbmALHiezQ* a;
	NI T1_;
	a = (tySequence_xv3aaFd3JCw8NbmALHiezQ*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < (a ? a->Sup.len : 0); T1_++) {
	nimGCvisit((void*)a->data[T1_].Field0, op);
	nimGCvisit((void*)a->data[T1_].Field1, op);
	}
}
static N_NIMCALL(void, Marker_tyRef_n9cmoMXcDs47wYDFGEXuCfw)(void* p, NI op) {
	tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* a;
	a = (tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg*)p;
	nimGCvisit((void*)(*a).data, op);
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
	c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p);
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg*, nstnewStringTable)(tyEnum_StringTableMode_G9c4wVDFIzf0xHmQvxso9a9cQ mode) {
	tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* result;
	result = (tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg*)0;
	result = (tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg*) newObj((&NTI_n9cmoMXcDs47wYDFGEXuCfw_), sizeof(tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg));
	(*result).Sup.m_type = (&NTI_V5PVrt9bIxZEeV7lfvqqtNg_);
	(*result).mode = mode;
	(*result).counter = ((NI) 0);
	if ((*result).data) { nimGCunrefNoCycle((*result).data); (*result).data = NIM_NIL; }
	(*result).data = (tySequence_xv3aaFd3JCw8NbmALHiezQ*) newSeqRC1((&NTI_xv3aaFd3JCw8NbmALHiezQ_), ((NI) 64));
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, myhash_j2b5ExM8jHC3fdJfR8v9aMw_2)(tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringDesc* key) {
	NI result;
	result = (NI)0;
	switch ((*t).mode) {
	case ((tyEnum_StringTableMode_G9c4wVDFIzf0xHmQvxso9a9cQ) 0):
	{
		result = hash_uBstFm5SYVQeOL3j9c9bc58A(key);
	}
	break;
	case ((tyEnum_StringTableMode_G9c4wVDFIzf0xHmQvxso9a9cQ) 1):
	{
		result = hashIgnoreCase_uBstFm5SYVQeOL3j9c9bc58A_2(key);
	}
	break;
	case ((tyEnum_StringTableMode_G9c4wVDFIzf0xHmQvxso9a9cQ) 2):
	{
		result = hashIgnoreStyle_uBstFm5SYVQeOL3j9c9bc58A_3(key);
	}
	break;
	}
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, myCmp_as9bkyBfpSJDtryRTEgMhcg)(tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	switch ((*t).mode) {
	case ((tyEnum_StringTableMode_G9c4wVDFIzf0xHmQvxso9a9cQ) 0):
	{
		NI T2_;
		T2_ = (NI)0;
		T2_ = cmp_xEnKsp9cfvO7Do9cTYXo8eJw(a, b);
		result = (T2_ == ((NI) 0));
	}
	break;
	case ((tyEnum_StringTableMode_G9c4wVDFIzf0xHmQvxso9a9cQ) 1):
	{
		NI T4_;
		T4_ = (NI)0;
		T4_ = nsuCmpIgnoreCase(a, b);
		result = (T4_ == ((NI) 0));
	}
	break;
	case ((tyEnum_StringTableMode_G9c4wVDFIzf0xHmQvxso9a9cQ) 2):
	{
		NI T6_;
		T6_ = (NI)0;
		T6_ = nsuCmpIgnoreStyle(a, b);
		result = (T6_ == ((NI) 0));
	}
	break;
	}
	return result;
}

static N_INLINE(NI, nextTry_4tI2vxIqcy1tNTBufKNbkgstrtabs)(NI h, NI maxHash) {
	NI result;
	result = (NI)0;
	result = (NI)((NI)((NI)(((NI) 5) * h) + ((NI) 1)) & maxHash);
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NI, rawGet_j2b5ExM8jHC3fdJfR8v9aMw)(tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringDesc* key) {
	NI result;
	NI h;
	NI T1_;
	NI T2_;
{	result = (NI)0;
	T1_ = (NI)0;
	T1_ = myhash_j2b5ExM8jHC3fdJfR8v9aMw_2(t, key);
	T2_ = (((*t).data ? (*t).data->Sup.len : 0)-1);
	h = (NI)(T1_ & T2_);
	{
		while (1) {
			NI T10_;
			if (!(*t).data->data[h].Field2) goto LA4;
			{
				NIM_BOOL T7_;
				T7_ = (NIM_BOOL)0;
				T7_ = myCmp_as9bkyBfpSJDtryRTEgMhcg(t, (*t).data->data[h].Field0, key);
				if (!T7_) goto LA8_;
				result = h;
				goto BeforeRet_;
			}
			LA8_: ;
			T10_ = (((*t).data ? (*t).data->Sup.len : 0)-1);
			h = nextTry_4tI2vxIqcy1tNTBufKNbkgstrtabs(h, T10_);
		} LA4: ;
	}
	result = ((NI) -1);
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nsthasKey)(tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringDesc* key) {
	NIM_BOOL result;
	NI T1_;
	result = (NIM_BOOL)0;
	T1_ = (NI)0;
	T1_ = rawGet_j2b5ExM8jHC3fdJfR8v9aMw(t, key);
	result = (((NI) 0) <= T1_);
	return result;
}

static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		if (!!((src == NIM_NIL))) goto LA3_;
		copyMem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
		if (!!((src == NIM_NIL))) goto LA3_;
		c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		(*c).refcount += ((NI) 8);
	}
	LA3_: ;
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c_2;
		if (!!(((*dest) == NIM_NIL))) goto LA7_;
		c_2 = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		{
			(*c_2).refcount -= ((NI) 8);
			if (!((NU64)((*c_2).refcount) < (NU64)(((NI) 8)))) goto LA11_;
			rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c_2);
		}
		LA11_: ;
	}
	LA7_: ;
	(*dest) = src;
}

static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
}

static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		incRef_9cAA5YuQAAC3MVbnGeV86swsystem(T5_);
	}
	LA3_: ;
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		decRef_MV4BBk6J1qu70IbBxwEn4wsystem(T10_);
	}
	LA8_: ;
	(*dest) = src;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc**, nstTake)(tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringDesc* key) {
	NimStringDesc** result;
	NI index;
	result = (NimStringDesc**)0;
	index = rawGet_j2b5ExM8jHC3fdJfR8v9aMw(t, key);
	{
		if (!(((NI) 0) <= index)) goto LA3_;
		result = (&(*t).data->data[index].Field1);
	}
	goto LA1_;
	LA3_: ;
	{
		tyObject_KeyError_nRD4SGrdQPt47sk7LIklpA* e;
		NimStringDesc* T6_;
		e = (tyObject_KeyError_nRD4SGrdQPt47sk7LIklpA*)0;
		e = (tyObject_KeyError_nRD4SGrdQPt47sk7LIklpA*) newObj((&NTI_nuL5K2f5u8HXdjAg35PVfw_), sizeof(tyObject_KeyError_nRD4SGrdQPt47sk7LIklpA));
		(*e).Sup.Sup.Sup.Sup.m_type = (&NTI_nRD4SGrdQPt47sk7LIklpA_);
		T6_ = (NimStringDesc*)0;
		T6_ = rawNewString((key ? key->Sup.len : 0) + 15);
appendString(T6_, ((NimStringDesc*) &TM_ZT9crccxweoChVXn9cHcxIXQ_7));
appendString(T6_, key);
		asgnRefNoCycle((void**) (&(*e).Sup.Sup.Sup.message), T6_);
		asgnRef((void**) (&(*e).Sup.Sup.Sup.parent), NIM_NIL);
		raiseException((Exception*)e, "KeyError");
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, getOrDefault_H9ck9bJDr0wy9bImHhMsTWhpw)(tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringDesc* key, NimStringDesc* default_0) {
	NimStringDesc* result;
	NI index;
	result = (NimStringDesc*)0;
	index = rawGet_j2b5ExM8jHC3fdJfR8v9aMw(t, key);
	{
		if (!(((NI) 0) <= index)) goto LA3_;
		result = copyString((*t).data->data[index].Field1);
	}
	goto LA1_;
	LA3_: ;
	{
		result = copyString(default_0);
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, mustRehash_K02IbeDTRFZ9b4m0M4Kahlg)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = ((NI)(length * ((NI) 2)) < (NI)(counter * ((NI) 3)));
	if (T1_) goto LA2_;
	T1_ = ((NI)(length - counter) < ((NI) 4));
	LA2_: ;
	result = T1_;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, rawInsert_XSijCUNMoyDFcaS9bIkWTUQ)(tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* t, tySequence_xv3aaFd3JCw8NbmALHiezQ** data, NimStringDesc* key, NimStringDesc* val) {
	NI h;
	NI T1_;
	NI T2_;
	NimStringDesc* T6_;
	NimStringDesc* T7_;
	T1_ = (NI)0;
	T1_ = myhash_j2b5ExM8jHC3fdJfR8v9aMw_2(t, key);
	T2_ = (((*data) ? (*data)->Sup.len : 0)-1);
	h = (NI)(T1_ & T2_);
	{
		while (1) {
			NI T5_;
			if (!(*data)->data[h].Field2) goto LA4;
			T5_ = (((*data) ? (*data)->Sup.len : 0)-1);
			h = nextTry_4tI2vxIqcy1tNTBufKNbkgstrtabs(h, T5_);
		} LA4: ;
	}
	T6_ = (NimStringDesc*)0;
	T6_ = (*data)->data[h].Field0; (*data)->data[h].Field0 = copyStringRC1(key);
	if (T6_) nimGCunrefNoCycle(T6_);
	T7_ = (NimStringDesc*)0;
	T7_ = (*data)->data[h].Field1; (*data)->data[h].Field1 = copyStringRC1(val);
	if (T7_) nimGCunrefNoCycle(T7_);
	(*data)->data[h].Field2 = NIM_TRUE;
}

N_LIB_PRIVATE N_NIMCALL(void, enlarge_FXZDHKcgdiC22y7FlOWZOQ)(tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* t) {
	tySequence_xv3aaFd3JCw8NbmALHiezQ* n;
	NI T1_;
	tySequence_xv3aaFd3JCw8NbmALHiezQ* T10_;
	n = (tySequence_xv3aaFd3JCw8NbmALHiezQ*)0;
	T1_ = ((*t).data ? (*t).data->Sup.len : 0);
	n = (tySequence_xv3aaFd3JCw8NbmALHiezQ*) newSeq((&NTI_xv3aaFd3JCw8NbmALHiezQ_), ((NI) ((NI)(T1_ * ((NI) 2)))));
	{
		NI i;
		NI colontmp_;
		NI T3_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		T3_ = (((*t).data ? (*t).data->Sup.len : 0)-1);
		colontmp_ = T3_;
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA5;
				i = res;
				{
					if (!(*t).data->data[i].Field2) goto LA8_;
					rawInsert_XSijCUNMoyDFcaS9bIkWTUQ(t, (&n), (*t).data->data[i].Field0, (*t).data->data[i].Field1);
				}
				LA8_: ;
				res += ((NI) 1);
			} LA5: ;
		}
	}
	T10_ = (tySequence_xv3aaFd3JCw8NbmALHiezQ*)0;
	T10_ = (*t).data;
	asgnRefNoCycle((void**) (&(*t).data), n);
	n = T10_;
}

N_LIB_PRIVATE N_NIMCALL(void, nstPut)(tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* t, NimStringDesc* key, NimStringDesc* val) {
	NI index;
	index = rawGet_j2b5ExM8jHC3fdJfR8v9aMw(t, key);
	{
		NimStringDesc* T5_;
		if (!(((NI) 0) <= index)) goto LA3_;
		T5_ = (NimStringDesc*)0;
		T5_ = (*t).data->data[index].Field1; (*t).data->data[index].Field1 = copyStringRC1(val);
		if (T5_) nimGCunrefNoCycle(T5_);
	}
	goto LA1_;
	LA3_: ;
	{
		{
			NI T9_;
			NIM_BOOL T10_;
			T9_ = ((*t).data ? (*t).data->Sup.len : 0);
			T10_ = (NIM_BOOL)0;
			T10_ = mustRehash_K02IbeDTRFZ9b4m0M4Kahlg(T9_, (*t).counter);
			if (!T10_) goto LA11_;
			enlarge_FXZDHKcgdiC22y7FlOWZOQ(t);
		}
		LA11_: ;
		rawInsert_XSijCUNMoyDFcaS9bIkWTUQ(t, (&(*t).data), key, val);
		(*t).counter += ((NI) 1);
	}
	LA1_: ;
}

N_LIB_PRIVATE N_NIMCALL(NI, nstlen)(tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* t) {
	NI result;
	result = (NI)0;
	result = (*t).counter;
	return result;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI)((*dest).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest).Sup.len += ((NI) 1);
}

N_LIB_PRIVATE N_NIMCALL(void, raiseFormatException_UlRj9cCVaVq3wqa9ckfyqy9cQ)(NimStringDesc* s) {
	tyObject_ValueError_5aqBlilCK53e9cDu4kUyN5Q* e;
	NimStringDesc* T1_;
	e = (tyObject_ValueError_5aqBlilCK53e9cDu4kUyN5Q*)0;
	e = (tyObject_ValueError_5aqBlilCK53e9cDu4kUyN5Q*) newObj((&NTI_yQYk49cCS1VAqkplQuc6KdQ_), sizeof(tyObject_ValueError_5aqBlilCK53e9cDu4kUyN5Q));
	(*e).Sup.Sup.Sup.m_type = (&NTI_5aqBlilCK53e9cDu4kUyN5Q_);
	T1_ = (NimStringDesc*)0;
	T1_ = rawNewString((s ? s->Sup.len : 0) + 30);
appendString(T1_, ((NimStringDesc*) &TM_ZT9crccxweoChVXn9cHcxIXQ_8));
appendString(T1_, s);
	asgnRefNoCycle((void**) (&(*e).Sup.Sup.message), T1_);
	raiseException((Exception*)e, "ValueError");
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, getValue_4FxACgRMhRTaH9axGj4POzA)(tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* t, tySet_tyEnum_FormatFlag_F4vlKAV4d0Kt9aXmu9cVNBrg flags, NimStringDesc* key) {
	NimStringDesc* result;
{	result = (NimStringDesc*)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nsthasKey(t, key);
		if (!T3_) goto LA4_;
		result = getOrDefault_H9ck9bJDr0wy9bImHhMsTWhpw(t, key, ((NimStringDesc*) NIM_NIL));
		goto BeforeRet_;
	}
	LA4_: ;
	{
		if (!((flags &(1U<<((NU)(((tyEnum_FormatFlag_F4vlKAV4d0Kt9aXmu9cVNBrg) 0))&7U)))!=0)) goto LA8_;
		result = getEnv_9b1nh9cAHhSLlHOPz8lCk5FA(key, ((NimStringDesc*) NIM_NIL));
	}
	goto LA6_;
	LA8_: ;
	{
		result = ((NimStringDesc*) NIM_NIL);
	}
	LA6_: ;
	{
		if (!((result ? result->Sup.len : 0) == ((NI) 0))) goto LA13_;
		{
			NimStringDesc* T19_;
			if (!((flags &(1U<<((NU)(((tyEnum_FormatFlag_F4vlKAV4d0Kt9aXmu9cVNBrg) 2))&7U)))!=0)) goto LA17_;
			T19_ = (NimStringDesc*)0;
			T19_ = rawNewString((key ? key->Sup.len : 0) + 1);
appendChar(T19_, 36);
appendString(T19_, key);
			result = T19_;
		}
		goto LA15_;
		LA17_: ;
		{
			if (!!(((flags &(1U<<((NU)(((tyEnum_FormatFlag_F4vlKAV4d0Kt9aXmu9cVNBrg) 1))&7U)))!=0))) goto LA21_;
			raiseFormatException_UlRj9cCVaVq3wqa9ckfyqy9cQ(key);
		}
		goto LA15_;
		LA21_: ;
		LA15_: ;
	}
	LA13_: ;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nstFormat)(NimStringDesc* f, tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg* t, tySet_tyEnum_FormatFlag_F4vlKAV4d0Kt9aXmu9cVNBrg flags) {
	NimStringDesc* result;
	NI i;
	result = (NimStringDesc*)0;
	result = ((NimStringDesc*) NIM_NIL);
	i = ((NI) 0);
	{
		while (1) {
			if (!(i < (f ? f->Sup.len : 0))) goto LA2;
			{
				if (!((NU8)(f->data[i]) == (NU8)(36))) goto LA5_;
				switch (((NU8)(f->data[(NI)(i + ((NI) 1))]))) {
				case 36:
				{
					result = addChar(result, 36);
					i += ((NI) 2);
				}
				break;
				case 123:
				{
					NI j;
					NimStringDesc* T13_;
					NimStringDesc* T14_;
					j = (NI)(i + ((NI) 1));
					{
						while (1) {
							NIM_BOOL T11_;
							T11_ = (NIM_BOOL)0;
							T11_ = (j < (f ? f->Sup.len : 0));
							if (!(T11_)) goto LA12_;
							T11_ = !(((NU8)(f->data[j]) == (NU8)(125)));
							LA12_: ;
							if (!T11_) goto LA10;
							j += ((NI) 1);
						} LA10: ;
					}
					T13_ = (NimStringDesc*)0;
					T13_ = substr_TWXUwbnq0SWWvDLfr8LXYw(f, (NI)(i + ((NI) 2)), (NI)(j - ((NI) 1)));
					T14_ = (NimStringDesc*)0;
					T14_ = getValue_4FxACgRMhRTaH9axGj4POzA(t, flags, T13_);
					result = resizeString(result, (T14_ ? T14_->Sup.len : 0) + 0);
appendString(result, T14_);
					i = (NI)(j + ((NI) 1));
				}
				break;
				case 97 ... 122:
				case 65 ... 90:
				case 128 ... 255:
				case 95:
				{
					NI j_2;
					NimStringDesc* T20_;
					NimStringDesc* T21_;
					j_2 = (NI)(i + ((NI) 1));
					{
						while (1) {
							NIM_BOOL T18_;
							T18_ = (NIM_BOOL)0;
							T18_ = (j_2 < (f ? f->Sup.len : 0));
							if (!(T18_)) goto LA19_;
							T18_ = (((NU8)(f->data[j_2])) >= ((NU8)(97)) && ((NU8)(f->data[j_2])) <= ((NU8)(122)) || ((NU8)(f->data[j_2])) >= ((NU8)(65)) && ((NU8)(f->data[j_2])) <= ((NU8)(90)) || ((NU8)(f->data[j_2])) >= ((NU8)(48)) && ((NU8)(f->data[j_2])) <= ((NU8)(57)) || ((NU8)(f->data[j_2])) == ((NU8)(95)) || ((NU8)(f->data[j_2])) >= ((NU8)(128)) && ((NU8)(f->data[j_2])) <= ((NU8)(255)));
							LA19_: ;
							if (!T18_) goto LA17;
							j_2 += ((NI) 1);
						} LA17: ;
					}
					T20_ = (NimStringDesc*)0;
					T20_ = substr_TWXUwbnq0SWWvDLfr8LXYw(f, (NI)(i + ((NI) 1)), (NI)(j_2 - ((NI) 1)));
					T21_ = (NimStringDesc*)0;
					T21_ = getValue_4FxACgRMhRTaH9axGj4POzA(t, flags, T20_);
					result = resizeString(result, (T21_ ? T21_->Sup.len : 0) + 0);
appendString(result, T21_);
					i = j_2;
				}
				break;
				default:
				{
					result = addChar(result, f->data[i]);
					i += ((NI) 1);
				}
				break;
				}
			}
			goto LA3_;
			LA5_: ;
			{
				result = addChar(result, f->data[i]);
				i += ((NI) 1);
			}
			LA3_: ;
		} LA2: ;
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_strtabsInit000)(void) {
{
	TFrame FR_; FR_.len = 0;
}
}

N_LIB_PRIVATE N_NIMCALL(void, stdlib_strtabsDatInit000)(void) {
static TNimNode* TM_ZT9crccxweoChVXn9cHcxIXQ_2[3];
static TNimNode* TM_ZT9crccxweoChVXn9cHcxIXQ_3[3];
static TNimNode* TM_ZT9crccxweoChVXn9cHcxIXQ_4[3];
NI TM_ZT9crccxweoChVXn9cHcxIXQ_6;
static char* NIM_CONST TM_ZT9crccxweoChVXn9cHcxIXQ_5[3] = {
"modeCaseSensitive", 
"modeCaseInsensitive", 
"modeStyleInsensitive"};
static TNimNode TM_ZT9crccxweoChVXn9cHcxIXQ_0[12];
NTI_V5PVrt9bIxZEeV7lfvqqtNg_.size = sizeof(tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg);
NTI_V5PVrt9bIxZEeV7lfvqqtNg_.kind = 17;
NTI_V5PVrt9bIxZEeV7lfvqqtNg_.base = (&NTI_ytyiCJqK439aF9cIibuRVpAg_);
TM_ZT9crccxweoChVXn9cHcxIXQ_2[0] = &TM_ZT9crccxweoChVXn9cHcxIXQ_0[1];
TM_ZT9crccxweoChVXn9cHcxIXQ_0[1].kind = 1;
TM_ZT9crccxweoChVXn9cHcxIXQ_0[1].offset = offsetof(tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg, counter);
TM_ZT9crccxweoChVXn9cHcxIXQ_0[1].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_ZT9crccxweoChVXn9cHcxIXQ_0[1].name = "counter";
TM_ZT9crccxweoChVXn9cHcxIXQ_2[1] = &TM_ZT9crccxweoChVXn9cHcxIXQ_0[2];
NTI_sPaDkVPSC0MkcoXCxPH9ccA_.size = sizeof(tyTuple_sPaDkVPSC0MkcoXCxPH9ccA);
NTI_sPaDkVPSC0MkcoXCxPH9ccA_.kind = 18;
NTI_sPaDkVPSC0MkcoXCxPH9ccA_.base = 0;
NTI_sPaDkVPSC0MkcoXCxPH9ccA_.flags = 2;
TM_ZT9crccxweoChVXn9cHcxIXQ_3[0] = &TM_ZT9crccxweoChVXn9cHcxIXQ_0[4];
TM_ZT9crccxweoChVXn9cHcxIXQ_0[4].kind = 1;
TM_ZT9crccxweoChVXn9cHcxIXQ_0[4].offset = offsetof(tyTuple_sPaDkVPSC0MkcoXCxPH9ccA, Field0);
TM_ZT9crccxweoChVXn9cHcxIXQ_0[4].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_ZT9crccxweoChVXn9cHcxIXQ_0[4].name = "Field0";
TM_ZT9crccxweoChVXn9cHcxIXQ_3[1] = &TM_ZT9crccxweoChVXn9cHcxIXQ_0[5];
TM_ZT9crccxweoChVXn9cHcxIXQ_0[5].kind = 1;
TM_ZT9crccxweoChVXn9cHcxIXQ_0[5].offset = offsetof(tyTuple_sPaDkVPSC0MkcoXCxPH9ccA, Field1);
TM_ZT9crccxweoChVXn9cHcxIXQ_0[5].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_ZT9crccxweoChVXn9cHcxIXQ_0[5].name = "Field1";
TM_ZT9crccxweoChVXn9cHcxIXQ_3[2] = &TM_ZT9crccxweoChVXn9cHcxIXQ_0[6];
TM_ZT9crccxweoChVXn9cHcxIXQ_0[6].kind = 1;
TM_ZT9crccxweoChVXn9cHcxIXQ_0[6].offset = offsetof(tyTuple_sPaDkVPSC0MkcoXCxPH9ccA, Field2);
TM_ZT9crccxweoChVXn9cHcxIXQ_0[6].typ = (&NTI_VaVACK0bpYmqIQ0mKcHfQQ_);
TM_ZT9crccxweoChVXn9cHcxIXQ_0[6].name = "Field2";
TM_ZT9crccxweoChVXn9cHcxIXQ_0[3].len = 3; TM_ZT9crccxweoChVXn9cHcxIXQ_0[3].kind = 2; TM_ZT9crccxweoChVXn9cHcxIXQ_0[3].sons = &TM_ZT9crccxweoChVXn9cHcxIXQ_3[0];
NTI_sPaDkVPSC0MkcoXCxPH9ccA_.node = &TM_ZT9crccxweoChVXn9cHcxIXQ_0[3];
NTI_xv3aaFd3JCw8NbmALHiezQ_.size = sizeof(tySequence_xv3aaFd3JCw8NbmALHiezQ*);
NTI_xv3aaFd3JCw8NbmALHiezQ_.kind = 24;
NTI_xv3aaFd3JCw8NbmALHiezQ_.base = (&NTI_sPaDkVPSC0MkcoXCxPH9ccA_);
NTI_xv3aaFd3JCw8NbmALHiezQ_.flags = 2;
NTI_xv3aaFd3JCw8NbmALHiezQ_.marker = Marker_tySequence_xv3aaFd3JCw8NbmALHiezQ;
TM_ZT9crccxweoChVXn9cHcxIXQ_0[2].kind = 1;
TM_ZT9crccxweoChVXn9cHcxIXQ_0[2].offset = offsetof(tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg, data);
TM_ZT9crccxweoChVXn9cHcxIXQ_0[2].typ = (&NTI_xv3aaFd3JCw8NbmALHiezQ_);
TM_ZT9crccxweoChVXn9cHcxIXQ_0[2].name = "data";
TM_ZT9crccxweoChVXn9cHcxIXQ_2[2] = &TM_ZT9crccxweoChVXn9cHcxIXQ_0[7];
NTI_G9c4wVDFIzf0xHmQvxso9a9cQ_.size = sizeof(tyEnum_StringTableMode_G9c4wVDFIzf0xHmQvxso9a9cQ);
NTI_G9c4wVDFIzf0xHmQvxso9a9cQ_.kind = 14;
NTI_G9c4wVDFIzf0xHmQvxso9a9cQ_.base = 0;
NTI_G9c4wVDFIzf0xHmQvxso9a9cQ_.flags = 3;
for (TM_ZT9crccxweoChVXn9cHcxIXQ_6 = 0; TM_ZT9crccxweoChVXn9cHcxIXQ_6 < 3; TM_ZT9crccxweoChVXn9cHcxIXQ_6++) {
TM_ZT9crccxweoChVXn9cHcxIXQ_0[TM_ZT9crccxweoChVXn9cHcxIXQ_6+8].kind = 1;
TM_ZT9crccxweoChVXn9cHcxIXQ_0[TM_ZT9crccxweoChVXn9cHcxIXQ_6+8].offset = TM_ZT9crccxweoChVXn9cHcxIXQ_6;
TM_ZT9crccxweoChVXn9cHcxIXQ_0[TM_ZT9crccxweoChVXn9cHcxIXQ_6+8].name = TM_ZT9crccxweoChVXn9cHcxIXQ_5[TM_ZT9crccxweoChVXn9cHcxIXQ_6];
TM_ZT9crccxweoChVXn9cHcxIXQ_4[TM_ZT9crccxweoChVXn9cHcxIXQ_6] = &TM_ZT9crccxweoChVXn9cHcxIXQ_0[TM_ZT9crccxweoChVXn9cHcxIXQ_6+8];
}
TM_ZT9crccxweoChVXn9cHcxIXQ_0[11].len = 3; TM_ZT9crccxweoChVXn9cHcxIXQ_0[11].kind = 2; TM_ZT9crccxweoChVXn9cHcxIXQ_0[11].sons = &TM_ZT9crccxweoChVXn9cHcxIXQ_4[0];
NTI_G9c4wVDFIzf0xHmQvxso9a9cQ_.node = &TM_ZT9crccxweoChVXn9cHcxIXQ_0[11];
TM_ZT9crccxweoChVXn9cHcxIXQ_0[7].kind = 1;
TM_ZT9crccxweoChVXn9cHcxIXQ_0[7].offset = offsetof(tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg, mode);
TM_ZT9crccxweoChVXn9cHcxIXQ_0[7].typ = (&NTI_G9c4wVDFIzf0xHmQvxso9a9cQ_);
TM_ZT9crccxweoChVXn9cHcxIXQ_0[7].name = "mode";
TM_ZT9crccxweoChVXn9cHcxIXQ_0[0].len = 3; TM_ZT9crccxweoChVXn9cHcxIXQ_0[0].kind = 2; TM_ZT9crccxweoChVXn9cHcxIXQ_0[0].sons = &TM_ZT9crccxweoChVXn9cHcxIXQ_2[0];
NTI_V5PVrt9bIxZEeV7lfvqqtNg_.node = &TM_ZT9crccxweoChVXn9cHcxIXQ_0[0];
NTI_n9cmoMXcDs47wYDFGEXuCfw_.size = sizeof(tyObject_StringTableObj_V5PVrt9bIxZEeV7lfvqqtNg*);
NTI_n9cmoMXcDs47wYDFGEXuCfw_.kind = 22;
NTI_n9cmoMXcDs47wYDFGEXuCfw_.base = (&NTI_V5PVrt9bIxZEeV7lfvqqtNg_);
NTI_n9cmoMXcDs47wYDFGEXuCfw_.marker = Marker_tyRef_n9cmoMXcDs47wYDFGEXuCfw;
}
