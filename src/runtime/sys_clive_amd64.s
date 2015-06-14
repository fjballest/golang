
#include "go_asm.h"
#include "go_tls.h"
#include "textflag.h"

TEXT _rt0_amd64_clive(SB),NOSPLIT,$24
	MOVQ	AX, _tos(SB)
	LEAQ	16(SP), AX
	MOVQ	AX, _privates(SB)
	MOVL	$1, _nprivates(SB)
	MOVL	inargc-8(FP), DI
	LEAQ	inargv+0(FP), SI
	MOVQ	$runtime·rt0_go(SB), AX
	JMP	AX

// func now() (sec int64, nsec int32)
TEXT time·now(SB),NOSPLIT,$8-12
	CALL	runtime·nanotime(SB)
	MOVQ	0(SP), AX

	// generated code for
	//	func f(x uint64) (uint64, uint64) { return x/1000000000, x%100000000 }
	// adapted to reduce duplication
	MOVQ	AX, CX
	MOVQ	$1360296554856532783, AX
	MULQ	CX
	ADDQ	CX, DX
	RCRQ	$1, DX
	SHRQ	$29, DX
	MOVQ	DX, sec+0(FP)
	IMULQ	$1000000000, DX
	SUBQ	DX, CX
	MOVL	CX, nsec+8(FP)
	RET

// This is needed by asm_amd64.s
TEXT runtime·settls(SB),NOSPLIT,$0
	RET

DATA runtime·isclive(SB)/4, $1
GLOBL runtime·isclive(SB), NOPTR, $4
GLOBL _tos(SB), NOPTR, $8
GLOBL _privates(SB), NOPTR, $8
GLOBL _nprivates(SB), NOPTR, $4
