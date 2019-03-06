.text
.global main
main:
    pushq %rbp
    movq %rsp, %rbp
    movl $40, %eax
    popq %rbp
    ret 
