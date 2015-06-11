#include "textflag.h"
#include "funcdata.h"

//func exit(code int)
// Import runtime·exit for cleanly exiting.
TEXT ·exit(SB),NOSPLIT,$8-8
	NO_LOCAL_POINTERS
	MOVQ	code+0(FP), AX
	MOVQ	AX, 0(SP)
	CALL	runtime·exit(SB)
	RET
