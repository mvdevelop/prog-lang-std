
# 🛠️ Assembly Projects

Este repositório contém uma coleção de programas desenvolvidos em linguagem **Assembly**. O objetivo é explorar o funcionamento de baixo nível do hardware, manipulação de registros e gerenciamento de memória.

## 📋 Pré-requisitos

Para compilar e rodar os programas deste diretório, você precisará de:

* **Assembler:** [NASM](https://nasm.us) (Netwide Assembler) ou MASM.
* **Linker:** `ld` (GNU Linker).
* **Ambiente:** Linux (x86_64) ou emuladores como DOSBox.

## 🚀 Como Compilar e Executar

Siga os passos abaixo no terminal para rodar um exemplo (ex: `hello.asm`):

1. **Assemble (Gera o arquivo objeto):**
   ```bash
   nasm -f elf64 hello.asm -o hello.o
Use o código com cuidado.
Link (Gera o executável):
bash
ld hello.o -o hello
Use o código com cuidado.
Executar:
bash
./hello
Use o código com cuidado.

## 📂 Estrutura do Diretório
/basicos: Exemplos de Hello World e operações aritméticas simples.
/intermediarios: Manipulação de strings e loops.
/avancados: Interação direta com syscalls do sistema operacional.

## 🧠 Conceitos Aplicados
Manipulação de registradores (RAX, RBX, RCX, etc.).
Gerenciamento de pilha (Stack - push/pop).
Chamadas de sistema (Syscalls no Linux x64).
Instruções de salto e controle de fluxo (jmp, cmp, jne).

## 📫 Contato: [mvdevelop]
