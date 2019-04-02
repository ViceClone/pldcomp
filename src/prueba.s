	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 13
	.globl	_toto                   ## -- Begin function toto
	.p2align	4, 0x90
_toto:                                  ## @toto
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	
	movq	%rsp, %rbp
	subq	$16, %rsp
	movl	$1, -4(%rbp)
	movl	$2, -8(%rbp)
	movl	$3, -12(%rbp)
	movb	$0, %al
	callq	_putchar
	movl	%eax, -16(%rbp)         ## 4-byte Spill
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"a"


.subsections_via_symbols
