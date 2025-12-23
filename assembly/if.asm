
section .data
    maior db "A eh maior", 10
    menor db "B eh maior ou igual", 10

section .text
    global _start

_start:
    mov rax, 10
    mov rbx, 5

    cmp rax, rbx
    jg a_maior

b_maior:
    mov rsi, menor
    mov rdx, 17
    jmp imprimir

a_maior:
    mov rsi, maior
    mov rdx, 11

imprimir:
    mov rax, 1
    mov rdi, 1
    syscall

    mov rax, 60
    xor rdi, rdi
    syscall
