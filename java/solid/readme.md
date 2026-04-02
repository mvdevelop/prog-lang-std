
## Princípios SOLID em Java ☕

Este repositório contém exemplos práticos dos princípios SOLID aplicados em Java, desenvolvidos como material de apoio para o estudo de Programação Orientada a Objetos.

## 📂 Estrutura do Projeto

O diretório está organizado por cada princípio do acrônimo:

1. [SRP] Single Responsibility Principle (Princípio da Responsabilidade Única)
Caminho: java/solid/srp/
Conceito: Uma classe deve ter um, e apenas um, motivo para mudar.
O que você encontra aqui: Exemplos de como separar a lógica de negócio (ex: cálculo de bônus) da lógica de persistência ou exibição (ex: salvar no banco ou imprimir log).

2. [OCP] Open/Closed Principle (Princípio Aberto/Fechado)
Caminho: java/solid/ocp/
Conceito: Entidades de software devem estar abertas para extensão, mas fechadas para modificação.
O que você encontra aqui: Implementações utilizando Interfaces e Polimorfismo para adicionar novas funcionalidades (como novos tipos de bônus ou cargos) sem precisar alterar o código fonte original.

## 🚀 Como Executar

Cada pasta possui sua própria classe Main (ou SistemaRH) para teste.
Certifique-se de ter o JDK 17+ instalado.
Importe a pasta raiz java/ no seu Eclipse ou IntelliJ.
Navegue até o pacote desejado (ex: ocp) e execute o arquivo principal.

## 🛠️ Tecnologias

Java
Paradigma de Orientação a Objetos (POO)
