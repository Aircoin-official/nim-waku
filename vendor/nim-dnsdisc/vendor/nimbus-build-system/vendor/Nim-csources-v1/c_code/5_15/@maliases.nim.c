/* Generated by Nim Compiler v1.0.11 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

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
typedef struct tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw;
typedef struct tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ;
typedef struct tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w;
typedef struct tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA;
typedef struct tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct tyObject_TIdObj__iIXPrEsiKHiioLj0HSkQhA tyObject_TIdObj__iIXPrEsiKHiioLj0HSkQhA;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__Ef05srmQTDulnBdXR4Ja6Q tySequence__Ef05srmQTDulnBdXR4Ja6Q;
typedef struct tySequence__DXS6mEo7PVUFJkirsQ9bNQA tySequence__DXS6mEo7PVUFJkirsQ9bNQA;
typedef struct tyObject_TStrTable__f07aOS3dr28kGa5wcE29aFA tyObject_TStrTable__f07aOS3dr28kGa5wcE29aFA;
typedef struct tySequence__DfgJFJEYoj4YBAHLZPl5lQ tySequence__DfgJFJEYoj4YBAHLZPl5lQ;
typedef struct tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA;
typedef struct tyObject_TLib__NBMxlJ6g3utqUlplqTTHkA tyObject_TLib__NBMxlJ6g3utqUlplqTTHkA;
typedef struct tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg;
typedef struct tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ;
typedef struct tySequence__9brg1xNurxcus33lU4IE1Dw tySequence__9brg1xNurxcus33lU4IE1Dw;
typedef struct tySequence__MvZmat48bhe9b6x9aUD58D5Q tySequence__MvZmat48bhe9b6x9aUD58D5Q;
typedef struct tyObject_TInstantiation__5LqgVn6Tq9ainQRK7TQAQxA tyObject_TInstantiation__5LqgVn6Tq9ainQRK7TQAQxA;
typedef struct tyTuple__zwpS6d6iewrdlBSTNFoyVA tyTuple__zwpS6d6iewrdlBSTNFoyVA;
typedef NU8 tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w;
struct tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q {
NU16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU32 tySet_tyEnum_TNodeFlag__jyh9acXHkhZANSSvPIY7ZLg;
typedef NU8 tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw {
tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* typ;
tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info;
tySet_tyEnum_TNodeFlag__jyh9acXHkhZANSSvPIY7ZLg flags;
tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw kind;
union{
struct {NI64 intVal;
};
struct {NF floatVal;
};
struct {NimStringDesc* strVal;
};
struct {tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* sym;
};
struct {tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA* ident;
};
struct {tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ* sons;
};
};
NimStringDesc* comment;
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
struct tyObject_TIdObj__iIXPrEsiKHiioLj0HSkQhA {
  RootObj Sup;
NI id;
};
typedef NU8 tyEnum_TSymKind__cNCW9acsSznmEccl1fgQwkw;
struct tyObject_TStrTable__f07aOS3dr28kGa5wcE29aFA {
NI counter;
tySequence__DfgJFJEYoj4YBAHLZPl5lQ* data;
};
typedef NU16 tyEnum_TMagic__shZhZOdbVC5nnFvcXQAImg;
typedef NU64 tySet_tyEnum_TSymFlag__K9ay6LWMat9bUiT9bIbMxpDHw;
typedef NU32 tySet_tyEnum_TOption__WspMeQySXNP2XoTWR5MTgg;
typedef NU8 tyEnum_TLocKind__O7PRFZKuiBBWbku09cayVBg;
typedef NU8 tyEnum_TStorageLoc__JK9cKMX3XnqHaUky9b6gkGEw;
typedef NU16 tySet_tyEnum_TLocFlag__o2bqJgR4ceIupnUSpxiudA;
struct tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA {
tyEnum_TLocKind__O7PRFZKuiBBWbku09cayVBg k;
tyEnum_TStorageLoc__JK9cKMX3XnqHaUky9b6gkGEw storage;
tySet_tyEnum_TLocFlag__o2bqJgR4ceIupnUSpxiudA flags;
tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* lode;
tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* r;
};
struct tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w {
  tyObject_TIdObj__iIXPrEsiKHiioLj0HSkQhA Sup;
tyEnum_TSymKind__cNCW9acsSznmEccl1fgQwkw kind;
union{
struct {tySequence__Ef05srmQTDulnBdXR4Ja6Q* typeInstCache;
};
struct {tySequence__DXS6mEo7PVUFJkirsQ9bNQA* procInstCache;
tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* gcUnsafetyReason;
tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* transformedBody;
};
struct {tySequence__DXS6mEo7PVUFJkirsQ9bNQA* usedGenerics;
tyObject_TStrTable__f07aOS3dr28kGa5wcE29aFA tab;
};
struct {tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* guard;
NI bitsize;
};
};
tyEnum_TMagic__shZhZOdbVC5nnFvcXQAImg magic;
tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* typ;
tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA* name;
tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info;
tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* owner;
tySet_tyEnum_TSymFlag__K9ay6LWMat9bUiT9bIbMxpDHw flags;
tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* ast;
tySet_tyEnum_TOption__WspMeQySXNP2XoTWR5MTgg options;
NI position;
NI offset;
tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA loc;
tyObject_TLib__NBMxlJ6g3utqUlplqTTHkA* annex;
tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* constraint;
};
typedef NI tyArray__emiAJ8okywrJw7ZHLzlXbQ[34];
struct tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg {
NI elems;
NI counter;
NI max;
tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ* head;
tySequence__9brg1xNurxcus33lU4IE1Dw* data;
tyArray__emiAJ8okywrJw7ZHLzlXbQ a;
};
typedef NU8 tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag;
typedef NU8 tyEnum_TCallingConvention__yjAJ8w0h1PBaSwSGJ3P7IA;
typedef NU64 tySet_tyEnum_TTypeFlag__x2m5g1NpbmDig4wLT3Ylhw;
typedef tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* tyArray__PsPyPA45AAjHu4uDGHNjTg[4];
struct tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ {
  tyObject_TIdObj__iIXPrEsiKHiioLj0HSkQhA Sup;
tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag kind;
tyEnum_TCallingConvention__yjAJ8w0h1PBaSwSGJ3P7IA callConv;
tySet_tyEnum_TTypeFlag__x2m5g1NpbmDig4wLT3Ylhw flags;
tySequence__Ef05srmQTDulnBdXR4Ja6Q* sons;
tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n;
tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* owner;
tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* sym;
tyArray__PsPyPA45AAjHu4uDGHNjTg attachedOps;
tySequence__MvZmat48bhe9b6x9aUD58D5Q* methods;
NI64 size;
NI16 align;
NI16 paddingAtEnd;
NI16 lockLevel;
tyObject_TLoc__EtHNvCB0bgfu9bFjzx9cb6aA loc;
tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* typeInst;
NI uniqueId;
};
typedef NU8 tyEnum_TDistinctCompare__9bNKHGs63atuMFXnAleTveg;
typedef NU8 tySet_tyEnum_TTypeCmpFlag__72pgRXSg7774cr9aCWVPORw;
typedef NU64 tySet_tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag;
struct tyTuple__zwpS6d6iewrdlBSTNFoyVA {
NI Field0;
tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* Field1;
};
struct tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
struct tySequence__Ef05srmQTDulnBdXR4Ja6Q {
  TGenericSeq Sup;
  tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* data[SEQ_DECL_SIZE];
};
struct tySequence__DXS6mEo7PVUFJkirsQ9bNQA {
  TGenericSeq Sup;
  tyObject_TInstantiation__5LqgVn6Tq9ainQRK7TQAQxA* data[SEQ_DECL_SIZE];
};
struct tySequence__DfgJFJEYoj4YBAHLZPl5lQ {
  TGenericSeq Sup;
  tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* data[SEQ_DECL_SIZE];
};
struct tySequence__9brg1xNurxcus33lU4IE1Dw {
  TGenericSeq Sup;
  tyObject_Trunk__ul49aWfv9aes8cutmeltT3gQ* data[SEQ_DECL_SIZE];
};
struct tySequence__MvZmat48bhe9b6x9aUD58D5Q {
  TGenericSeq Sup;
  tyTuple__zwpS6d6iewrdlBSTNFoyVA data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w, isPartOf__TemHLbwRN019anIx4JpcPTQ)(tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* a, tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* b);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__JE6t4x7Z3v2iVz27Nx0MRAmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(void, initIntSet__n8oDZMn19bEdodSnrBQB9a1Q)(tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg* Result);
N_LIB_PRIVATE N_NIMCALL(tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w, isPartOfAux__PKSUIrEE34gltgjvuUpCwQ)(tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* a, tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* b, tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg* marker);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, containsOrIncl__VFt0uM7bgfJ5age9alOsU9cg)(tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg* s, NI key);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, compareTypes__oyXq5u7iL4RjsT9bovvTE9cg)(tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* x, tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* y, tyEnum_TDistinctCompare__9bNKHGs63atuMFXnAleTveg cmp, tySet_tyEnum_TTypeCmpFlag__72pgRXSg7774cr9aCWVPORw flags);
N_LIB_PRIVATE N_NIMCALL(tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ*, skipTypes__zsqmUNR5OZrTUna0Y9bdu9bg)(tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* t, tySet_tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag kinds);
N_LIB_PRIVATE N_NIMCALL(tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w, isPartOfAux__XvshesUrxewVhlfKjjnMGw)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* b, tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg* marker);
static N_INLINE(NI, len__P89cqdlERShb9alU3iC0yj8wast)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, lastSon__UPSW0jLTX5qJL51YMUAHgw)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ*, lastSon__Bdq9aiV9buvJtPvmOc0OR5JQ)(tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* n);
static N_INLINE(NI, len__5mJADrRYkP3r9auuiuDZN9cQast)(tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* n);
N_LIB_PRIVATE N_NIMCALL(tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w, isPartOf__1otDDZAmvFsmbqPyFytXFg)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* b);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDeepConstExpr__9cP6JNeOKqczaXCI4Zo4SBQ_3)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, sameValue__uOYuOsiCZAbEPMGwBL8r8g)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* b);
static N_INLINE(void, nimSetMem__JE6t4x7Z3v2iVz27Nx0MRAmemory)(void* a, int v, NI size) {	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {	nimSetMem__JE6t4x7Z3v2iVz27Nx0MRAmemory(p, ((int) 0), size);
}
static N_INLINE(NI, len__P89cqdlERShb9alU3iC0yj8wast)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n) {	NI result;
	NI T1_;
	result = (NI)0;
	T1_ = ((*n).sons ? (*n).sons->Sup.len : 0);
	result = T1_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w, isPartOfAux__XvshesUrxewVhlfKjjnMGw)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* b, tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg* marker) {	tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w result;
{	result = (tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w)0;
	result = ((tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w) 0);
	switch ((*n).kind) {
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 138):
	{
		{
			NI i;
			NI colontmp_;
			NI i_2;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = len__P89cqdlERShb9alU3iC0yj8wast(n);
			i_2 = ((NI) 0);
			{
				while (1) {
					if (!(i_2 < colontmp_)) goto LA4;
					i = i_2;
					result = isPartOfAux__XvshesUrxewVhlfKjjnMGw((*n).sons->data[i], b, marker);
					{
						if (!(result == ((tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w) 2))) goto LA7_;
						goto BeforeRet_;
					}
					LA7_: ;
					i_2 += ((NI) 1);
				} LA4: ;
			}
		}
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 139):
	{
		result = isPartOfAux__XvshesUrxewVhlfKjjnMGw((*n).sons->data[((NI) 0)], b, marker);
		{
			if (!(result == ((tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w) 2))) goto LA12_;
			goto BeforeRet_;
		}
		LA12_: ;
		{
			NI i_3;
			NI colontmp__2;
			NI i_4;
			i_3 = (NI)0;
			colontmp__2 = (NI)0;
			colontmp__2 = len__P89cqdlERShb9alU3iC0yj8wast(n);
			i_4 = ((NI) 1);
			{
				while (1) {
					if (!(i_4 < colontmp__2)) goto LA16;
					i_3 = i_4;
					switch ((*(*n).sons->data[i_3]).kind) {
					case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 85):
					case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 88):
					{
						tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* T18_;
						T18_ = (tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*)0;
						T18_ = lastSon__UPSW0jLTX5qJL51YMUAHgw((*n).sons->data[i_3]);
						result = isPartOfAux__XvshesUrxewVhlfKjjnMGw(T18_, b, marker);
						{
							if (!(result == ((tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w) 2))) goto LA21_;
							goto BeforeRet_;
						}
						LA21_: ;
					}
					break;
					default:
					{
					}
					break;
					}
					i_4 += ((NI) 1);
				} LA16: ;
			}
		}
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 3):
	{
		result = isPartOfAux__PKSUIrEE34gltgjvuUpCwQ((*(*n).sym).typ, b, marker);
	}
	break;
	default:
	{
	}
	break;
	}
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NI, len__5mJADrRYkP3r9auuiuDZN9cQast)(tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* n) {	NI result;
	NI T1_;
	result = (NI)0;
	T1_ = ((*n).sons ? (*n).sons->Sup.len : 0);
	result = T1_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w, isPartOfAux__PKSUIrEE34gltgjvuUpCwQ)(tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* a, tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* b, tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg* marker) {	tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w result;
{	result = (tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w)0;
	result = ((tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w) 0);
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a == NIM_NIL);
		if (T3_) goto LA4_;
		T3_ = (b == NIM_NIL);
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	{
		NIM_BOOL T9_;
		T9_ = (NIM_BOOL)0;
		T9_ = containsOrIncl__VFt0uM7bgfJ5age9alOsU9cg(marker, (*a).Sup.id);
		if (!T9_) goto LA10_;
		goto BeforeRet_;
	}
	LA10_: ;
	{
		NIM_BOOL T14_;
		T14_ = (NIM_BOOL)0;
		T14_ = compareTypes__oyXq5u7iL4RjsT9bovvTE9cg(a, b, ((tyEnum_TDistinctCompare__9bNKHGs63atuMFXnAleTveg) 1), 0);
		if (!T14_) goto LA15_;
		result = ((tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w) 2);
		goto BeforeRet_;
	}
	LA15_: ;
	switch ((*a).kind) {
	case ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 17):
	{
		{
			tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* T22_;
			if (!!(((*a).sons->data[((NI) 0)] == NIM_NIL))) goto LA20_;
			T22_ = (tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ*)0;
			T22_ = skipTypes__zsqmUNR5OZrTUna0Y9bdu9bg((*a).sons->data[((NI) 0)], IL64(36275087638268176));
			result = isPartOfAux__PKSUIrEE34gltgjvuUpCwQ(T22_, b, marker);
		}
		LA20_: ;
		{
			if (!(result == ((tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w) 0))) goto LA25_;
			result = isPartOfAux__XvshesUrxewVhlfKjjnMGw((*a).n, b, marker);
		}
		LA25_: ;
	}
	break;
	case ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 11):
	case ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 13):
	case ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 4):
	case ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 46):
	{
		tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* T28_;
		T28_ = (tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ*)0;
		T28_ = lastSon__Bdq9aiV9buvJtPvmOc0OR5JQ(a);
		result = isPartOfAux__PKSUIrEE34gltgjvuUpCwQ(T28_, b, marker);
	}
	break;
	case ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 16):
	case ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 19):
	case ((tyEnum_TTypeKind__9a3YiReNVD0IJHWFKgXRe9ag) 18):
	{
		{
			NI i;
			NI colontmp_;
			NI i_2;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = len__5mJADrRYkP3r9auuiuDZN9cQast(a);
			i_2 = ((NI) 0);
			{
				while (1) {
					if (!(i_2 < colontmp_)) goto LA32;
					i = i_2;
					result = isPartOfAux__PKSUIrEE34gltgjvuUpCwQ((*a).sons->data[i], b, marker);
					{
						if (!(result == ((tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w) 2))) goto LA35_;
						goto BeforeRet_;
					}
					LA35_: ;
					i_2 += ((NI) 1);
				} LA32: ;
			}
		}
	}
	break;
	default:
	{
	}
	break;
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w, isPartOf__TemHLbwRN019anIx4JpcPTQ)(tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* a, tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* b) {	tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w result;
	tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg marker;
	result = (tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w)0;
	nimZeroMem((void*)(&marker), sizeof(tyObject_IntSet__PQrmFm4BXFkFSVOUl1ojSg));
	initIntSet__n8oDZMn19bEdodSnrBQB9a1Q((&marker));
	result = isPartOfAux__PKSUIrEE34gltgjvuUpCwQ(b, a, (&marker));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w, isPartOf__1otDDZAmvFsmbqPyFytXFg)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* a, tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* b) {	tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w result;
	result = (tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w)0;
	{
		if (!((*a).kind == (*b).kind)) goto LA3_;
		switch ((*a).kind) {
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 3):
		{
			{
				if (!((*(*a).sym).Sup.id == (*(*b).sym).Sup.id)) goto LA8_;
				result = ((tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w) 2);
			}
			goto LA6_;
			LA8_: ;
			{
				NIM_BOOL T11_;
				T11_ = (NIM_BOOL)0;
				T11_ = ((12576 &((NU32)1<<((NU)((*(*a).sym).kind)&31U)))!=0);
				if (T11_) goto LA12_;
				T11_ = ((12576 &((NU32)1<<((NU)((*(*b).sym).kind)&31U)))!=0);
				LA12_: ;
				if (!T11_) goto LA13_;
				result = ((tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w) 0);
			}
			goto LA6_;
			LA13_: ;
			{
				{
					tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w T18_;
					T18_ = (tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w)0;
					T18_ = isPartOf__TemHLbwRN019anIx4JpcPTQ((*(*a).sym).typ, (*(*b).sym).typ);
					if (!!((T18_ == ((tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w) 0)))) goto LA19_;
					result = ((tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w) 1);
				}
				LA19_: ;
			}
			LA6_: ;
		}
		break;
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 42):
		{
			result = isPartOf__1otDDZAmvFsmbqPyFytXFg((*a).sons->data[((NI) 0)], (*b).sons->data[((NI) 0)]);
			{
				NIM_BOOL T24_;
				NI T25_;
				NI T27_;
				T24_ = (NIM_BOOL)0;
				T25_ = (NI)0;
				T25_ = len__P89cqdlERShb9alU3iC0yj8wast(a);
				T24_ = (((NI) 2) <= T25_);
				if (!(T24_)) goto LA26_;
				T27_ = (NI)0;
				T27_ = len__P89cqdlERShb9alU3iC0yj8wast(b);
				T24_ = (((NI) 2) <= T27_);
				LA26_: ;
				if (!T24_) goto LA28_;
				{
					NIM_BOOL T32_;
					NIM_BOOL T33_;
					tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* x;
					tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* y;
					T32_ = (NIM_BOOL)0;
					T33_ = (NIM_BOOL)0;
					T33_ = (result == ((tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w) 2));
					if (!(T33_)) goto LA34_;
					T33_ = isDeepConstExpr__9cP6JNeOKqczaXCI4Zo4SBQ_3((*a).sons->data[((NI) 1)]);
					LA34_: ;
					T32_ = T33_;
					if (!(T32_)) goto LA35_;
					T32_ = isDeepConstExpr__9cP6JNeOKqczaXCI4Zo4SBQ_3((*b).sons->data[((NI) 1)]);
					LA35_: ;
					if (!T32_) goto LA36_;
					{
						if (!((*(*a).sons->data[((NI) 1)]).kind == ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 58))) goto LA40_;
						x = (*(*a).sons->data[((NI) 1)]).sons->data[((NI) 1)];
					}
					goto LA38_;
					LA40_: ;
					{
						x = (*a).sons->data[((NI) 1)];
					}
					LA38_: ;
					{
						if (!((*(*b).sons->data[((NI) 1)]).kind == ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 58))) goto LA45_;
						y = (*(*b).sons->data[((NI) 1)]).sons->data[((NI) 1)];
					}
					goto LA43_;
					LA45_: ;
					{
						y = (*b).sons->data[((NI) 1)];
					}
					LA43_: ;
					{
						NIM_BOOL T50_;
						T50_ = (NIM_BOOL)0;
						T50_ = sameValue__uOYuOsiCZAbEPMGwBL8r8g(x, y);
						if (!T50_) goto LA51_;
						result = ((tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w) 2);
					}
					goto LA48_;
					LA51_: ;
					{
						result = ((tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w) 0);
					}
					LA48_: ;
				}
				LA36_: ;
			}
			goto LA22_;
			LA28_: ;
			{
				{
					if (!!((result == ((tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w) 2)))) goto LA57_;
					{
						tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w T61_;
						T61_ = (tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w)0;
						T61_ = isPartOf__TemHLbwRN019anIx4JpcPTQ((*a).typ, (*b).typ);
						if (!!((T61_ == ((tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w) 0)))) goto LA62_;
						result = ((tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w) 1);
					}
					LA62_: ;
				}
				LA57_: ;
			}
			LA22_: ;
		}
		break;
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 45):
		{
			result = isPartOf__1otDDZAmvFsmbqPyFytXFg((*a).sons->data[((NI) 0)], (*b).sons->data[((NI) 0)]);
			{
				if (!!((result == ((tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w) 0)))) goto LA67_;
				{
					if (!!(((*(*(*a).sons->data[((NI) 1)]).sym).Sup.id == (*(*(*b).sons->data[((NI) 1)]).sym).Sup.id))) goto LA71_;
					result = ((tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w) 0);
				}
				LA71_: ;
			}
			LA67_: ;
		}
		break;
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 65):
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 47):
		{
			result = isPartOf__1otDDZAmvFsmbqPyFytXFg((*a).sons->data[((NI) 0)], (*b).sons->data[((NI) 0)]);
			{
				if (!!((result == ((tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w) 2)))) goto LA76_;
				{
					tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w T80_;
					T80_ = (tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w)0;
					T80_ = isPartOf__TemHLbwRN019anIx4JpcPTQ((*a).typ, (*b).typ);
					if (!!((T80_ == ((tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w) 0)))) goto LA81_;
					result = ((tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w) 1);
				}
				LA81_: ;
			}
			LA76_: ;
		}
		break;
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 58):
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 59):
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 60):
		{
			result = isPartOf__1otDDZAmvFsmbqPyFytXFg((*a).sons->data[((NI) 1)], (*b).sons->data[((NI) 1)]);
		}
		break;
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 67):
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 66):
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 46):
		{
			result = isPartOf__1otDDZAmvFsmbqPyFytXFg((*a).sons->data[((NI) 0)], (*b).sons->data[((NI) 0)]);
		}
		break;
		default:
		{
		}
		break;
		}
	}
	goto LA1_;
	LA3_: ;
	{
		switch ((*b).kind) {
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 42):
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 45) ... ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 46):
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 64):
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 66) ... ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 67):
		{
			result = isPartOf__1otDDZAmvFsmbqPyFytXFg(a, (*b).sons->data[((NI) 0)]);
		}
		break;
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 47):
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 65):
		{
			{
				tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w T91_;
				T91_ = (tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w)0;
				T91_ = isPartOf__TemHLbwRN019anIx4JpcPTQ((*a).typ, (*b).typ);
				if (!!((T91_ == ((tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w) 0)))) goto LA92_;
				result = isPartOf__1otDDZAmvFsmbqPyFytXFg(a, (*b).sons->data[((NI) 0)]);
				{
					if (!(result == ((tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w) 0))) goto LA96_;
					result = ((tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w) 1);
				}
				LA96_: ;
			}
			LA92_: ;
		}
		break;
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 58) ... ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 60):
		{
			result = isPartOf__1otDDZAmvFsmbqPyFytXFg(a, (*b).sons->data[((NI) 1)]);
		}
		break;
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 3):
		{
			switch ((*a).kind) {
			case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 42):
			case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 45) ... ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 46):
			case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 64):
			case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 66) ... ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 67):
			{
				result = isPartOf__1otDDZAmvFsmbqPyFytXFg((*a).sons->data[((NI) 0)], b);
			}
			break;
			case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 58) ... ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 60):
			{
				result = isPartOf__1otDDZAmvFsmbqPyFytXFg((*a).sons->data[((NI) 1)], b);
			}
			break;
			case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 47):
			case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 65):
			{
				{
					tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w T105_;
					T105_ = (tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w)0;
					T105_ = isPartOf__TemHLbwRN019anIx4JpcPTQ((*a).typ, (*b).typ);
					if (!!((T105_ == ((tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w) 0)))) goto LA106_;
					result = isPartOf__1otDDZAmvFsmbqPyFytXFg((*a).sons->data[((NI) 0)], b);
					{
						if (!(result == ((tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w) 0))) goto LA110_;
						result = ((tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w) 1);
					}
					LA110_: ;
				}
				LA106_: ;
			}
			break;
			default:
			{
			}
			break;
			}
		}
		break;
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 38):
		{
			result = ((tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w) 0);
			{
				NI i;
				NI colontmp_;
				NI i_2;
				i = (NI)0;
				colontmp_ = (NI)0;
				colontmp_ = len__P89cqdlERShb9alU3iC0yj8wast(b);
				i_2 = ((NI) 1);
				{
					while (1) {
						tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w res;
						if (!(i_2 < colontmp_)) goto LA116;
						i = i_2;
						res = isPartOf__1otDDZAmvFsmbqPyFytXFg(a, (*(*b).sons->data[i]).sons->data[((NI) 1)]);
						{
							if (!!((res == ((tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w) 0)))) goto LA119_;
							result = res;
							{
								if (!(res == ((tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w) 2))) goto LA123_;
								goto LA114;
							}
							LA123_: ;
						}
						LA119_: ;
						i_2 += ((NI) 1);
					} LA116: ;
				}
			} LA114: ;
		}
		break;
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 26) ... ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 32):
		{
			result = ((tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w) 0);
			{
				NI i_3;
				NI colontmp__2;
				NI i_4;
				i_3 = (NI)0;
				colontmp__2 = (NI)0;
				colontmp__2 = len__P89cqdlERShb9alU3iC0yj8wast(b);
				i_4 = ((NI) 1);
				{
					while (1) {
						tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w res_2;
						if (!(i_4 < colontmp__2)) goto LA128;
						i_3 = i_4;
						res_2 = isPartOf__1otDDZAmvFsmbqPyFytXFg(a, (*b).sons->data[i_3]);
						{
							if (!!((res_2 == ((tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w) 0)))) goto LA131_;
							result = res_2;
							{
								if (!(res_2 == ((tyEnum_TAnalysisResult__p9a9bcrXoRmLT4eUuwrDq9b4w) 2))) goto LA135_;
								goto LA126;
							}
							LA135_: ;
						}
						LA131_: ;
						i_4 += ((NI) 1);
					} LA128: ;
				}
			} LA126: ;
		}
		break;
		case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 41):
		{
			{
				NI T140_;
				T140_ = (NI)0;
				T140_ = len__P89cqdlERShb9alU3iC0yj8wast(b);
				if (!(((NI) 0) < T140_)) goto LA141_;
				result = isPartOf__1otDDZAmvFsmbqPyFytXFg(a, (*b).sons->data[((NI) 0)]);
			}
			LA141_: ;
		}
		break;
		default:
		{
		}
		break;
		}
	}
	LA1_: ;
	return result;
}
