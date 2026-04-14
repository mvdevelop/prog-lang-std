
# SOLID Principles in C

Este repositório contém exemplos práticos de como aplicar os princípios **SOLID** utilizando a linguagem **C**. Embora C não seja uma linguagem orientada a objetos nativa, é possível emular esses conceitos através de structs, ponteiros de função e abstrações de dados.

## 🚀 O que é SOLID?

SOLID é um acrônimo para cinco princípios de design de software que visam tornar o código mais compreensível, flexível e sustentável:

1.  **S - Single Responsibility Principle** (Princípio da Responsabilidade Única)
2.  **O - Open/Closed Principle** (Princípio Aberto/Fechado)
3.  **L - Liskov Substitution Principle** (Princípio da Substituição de Liskov)
4.  **I - Interface Segregation Principle** (Princípio da Segregação de Interface)
5.  **D - Dependency Inversion Principle** (Princípio da Inversão de Dependência)

## 📂 Estrutura do Projeto

Cada princípio possui sua própria pasta ou arquivo exemplificando a implementação técnica em C:

- `/src/srp.c`: Exemplo de separação de lógica de dados e IO.
- `/src/ocp.c`: Uso de ponteiros de função para extensão sem modificação.
- `/src/lsp.c`: Herança via composição de structs e alinhamento de memória.
- `/src/isp.c`: Divisão de contratos (v-tables) em interfaces menores.
- `/src/dip.c`: Injeção de dependência via abstrações de structs.

## 🛠 Como Compilar

Você pode compilar os exemplos utilizando o `gcc`:

```bash
gcc -o srp src/srp.c
./srp
Use o código com cuidado.

## 📝 Notas de Implementação

Para implementar SOLID em C, utilizamos técnicas como:
Opaque Pointers: Para encapsulamento.
Function Pointers: Para polimorfismo.
Composition: Para reaproveitamento de código em vez de herança clássica.

Desenvolvido por mvdevelop

