
section .data
    msg db "Numero: 5", 10
    len equ $ - msg

section .text
    global _start

_start:
    mov rax, 1      ; write
    mov rdi, 1      ; stdout
    mov rsi, msg
    mov rdx, len
    syscall

    mov rax, 60
    xor rdi, rdi
    syscall
