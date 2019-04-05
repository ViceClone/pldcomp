	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 13
	.globl	_suma                   ## -- Begin function suma
	.p2align	4, 0x90
_suma:                                  ## @suma
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	movq	%rsp, %rbp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	%edx, -12(%rbp)
	movl	-4(%rbp), %edx
	addl	-8(%rbp), %edx
	addl	-12(%rbp), %edx
	movl	%edx, %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$16, %rsp
	movl	$9, %edx
	movl	$0, -4(%rbp)
	movl	$3, -8(%rbp)
	movl	-8(%rbp), %edi
	movl	-8(%rbp), %eax
	shll	$2, %eax
	movl	%eax, %esi
	callq	_suma
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function

.subsections_via_symbols
