/* Generated by Nim Compiler v0.19.9 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
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
typedef struct tyObject_IncrementalCtx_sdH7TnbKACuAzE7DBabnCA tyObject_IncrementalCtx_sdH7TnbKACuAzE7DBabnCA;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
#  define nimfr_(proc, file) \
    TFrame FR_; \
    FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = 0; nimFrame(&FR_);

#  define nimfrs_(proc, file, slots, length) \
    struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename; NI len; VarSlot s[slots];} FR_; \
    FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = length; nimFrame((TFrame*)&FR_);

#  define nimln_(n, file) \
    FR_.line = n; FR_.filename = file;
struct tyObject_IncrementalCtx_sdH7TnbKACuAzE7DBabnCA {
char dummy;
};
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
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached_II46IjNZztN9bmbxUD8dt8g_2)(void);
TNimType NTI_sdH7TnbKACuAzE7DBabnCA_;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) (((NI) 2000))))) goto LA9_;
		callDepthLimitReached_II46IjNZztN9bmbxUD8dt8g_2();
	}
	LA9_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, compiler_incrementalDatInit000)(void) {
static TNimNode TM_YQOtgr9cJ9bm1VgoJ2AFdhTQ_0[1];
NTI_sdH7TnbKACuAzE7DBabnCA_.size = sizeof(tyObject_IncrementalCtx_sdH7TnbKACuAzE7DBabnCA);
NTI_sdH7TnbKACuAzE7DBabnCA_.kind = 18;
NTI_sdH7TnbKACuAzE7DBabnCA_.base = 0;
NTI_sdH7TnbKACuAzE7DBabnCA_.flags = 3;
TM_YQOtgr9cJ9bm1VgoJ2AFdhTQ_0[0].len = 0; TM_YQOtgr9cJ9bm1VgoJ2AFdhTQ_0[0].kind = 2;
NTI_sdH7TnbKACuAzE7DBabnCA_.node = &TM_YQOtgr9cJ9bm1VgoJ2AFdhTQ_0[0];
}
