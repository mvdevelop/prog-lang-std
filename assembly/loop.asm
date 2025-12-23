
section .text
    global _start

_start:
    mov rcx, 5

loop_inicio:
    dec rcx
    cmp rcx, 0
    jne loop_inicio

    mov rax, 60
    xor rdi, rdi
    syscall
