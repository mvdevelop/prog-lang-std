
## Introdução à Programação OO em Java ☕

Este projeto foi desenvolvido como parte da aula do Prof. Marlos de Mendonça Corrêa, focada nos fundamentos da Programação Orientada a Objetos (POO).

## 🎯 Objetivos do Projeto

- Aplicar os conceitos de **Classes** e **Objetos**.
- Implementar **Herança** entre classes.
- Demonstrar o uso de **Polimorfismo** (sobrescrita de métodos).

## 🏗️ Estrutura de Pastas

A organização segue o padrão de pacotes Java para o VS Code:
```text
poo-java/
└── src/
    └── br/
        └── com/
            └── aula/
                ├── Funcionario.java  (Superclasse)
                ├── Gerente.java      (Subclasse / Herança)
                └── SistemaRh.java    (Classe Principal / Main)
Use o código com cuidado.

## 💻 Como Executar

Certifique-se de ter o JDK 17+ instalado.
No VS Code, instale o Extension Pack for Java.
Abra a pasta raiz poo-java.
Vá até o arquivo SistemaRh.java.
Clique em Run ou pressione F5.

## 📝 Conceitos Aplicados

Herança: A classe Gerente herda atributos e métodos de Funcionario.
Polimorfismo: O método calcularBonus() é adaptado para cada tipo de funcionário.
Encapsulamento: Uso de modificadores de acesso como private e protected.
