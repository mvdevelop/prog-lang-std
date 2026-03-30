
## 🚀 JavaScript SOLID Principles

Este diretório contém exemplos práticos de como aplicar os princípios SOLID em JavaScript. O objetivo é transformar códigos "macarrônicos" e de difícil manutenção em sistemas escaláveis, testáveis e flexíveis.

## 📌 O que é SOLID?

SOLID é um acrônimo para cinco princípios de design de software orientado a objetos que ajudam a manter o código limpo e organizado:
S - Single Responsibility Principle (Responsabilidade Única)
O - Open/Closed Principle (Aberto/Fechado)
L - Liskov Substitution Principle (Substituição de Liskov)
I - Interface Segregation Principle (Segregação de Interface)
D - Dependency Inversion Principle (Inversão de Dependência)

## 📂 Exemplos Implementados
## 🛠️ SRP - Single Responsibility Principle

Problema: Classes "God" que fazem tudo (lógica, banco, e-mail).
Solução: Divisão em Pedido, PedidoRepository e EmailService.
Benefício: Facilidade em trocar o banco de dados sem quebrar a lógica de cálculo do pedido.

## 🔌 OCP - Open/Closed Principle

Problema: Uso excessivo de if/else ou switch para novas regras de negócio.
Solução: Implementação de um objeto de mapeamento de estratégias de desconto.
Benefício: Adicionar novos descontos (ex: Black Friday) sem alterar o código da função principal.

## 🏗️ DIP - Dependency Inversion Principle

Problema: Código acoplado a bibliotecas específicas (ex: Axios).
Solução: Injeção de Dependência através do construtor da classe.
Benefício: Capacidade de trocar o cliente HTTP ou usar um mock para testes unitários sem mudar a classe de serviço.

## 💻 Como utilizar estes exemplos?

Cada arquivo .js neste diretório contém:
Um comentário no topo explicando o erro comum que viola o princípio.
A implementação refatorada seguindo o padrão SOLID.
Um exemplo de uso prático no final do arquivo.
Para executar qualquer exemplo, utilize o Node.js:
bash
node nome-do-arquivo.js
Use o código com cuidado.
