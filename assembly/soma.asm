
section .data
    a dq 10
    b dq 20

section .text
    global _start

_start:
    mov rax, [a]
    add rax, [b]

    mov rax, 60
    xor rdi, rdi
    syscall
