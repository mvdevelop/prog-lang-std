
section .data
    msg db "Loop", 10
    len equ $ - msg

section .text
    global _start

_start:
    mov rcx, 3

repetir:
    mov rax, 1
    mov rdi, 1
    mov rsi, msg
    mov rdx, len
    syscall

    loop repetir

    mov rax, 60
    xor rdi, rdi
    syscall
