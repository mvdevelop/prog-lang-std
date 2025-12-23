
section .bss
    buffer resb 20

section .text
    global _start

_start:
    ; read
    mov rax, 0
    mov rdi, 0
    mov rsi, buffer
    mov rdx, 20
    syscall

    ; write
    mov rax, 1
    mov rdi, 1
    mov rsi, buffer
    mov rdx, 20
    syscall

    mov rax, 60
    xor rdi, rdi
    syscall
