
# Princípios SOLID em C++ 🧱

Este diretório é dedicado ao estudo e aplicação dos princípios **SOLID**, os cinco pilares da programação orientada a objetos que visam tornar o software mais compreensível, flexível e fácil de manter.

## 📖 Os 5 Princípios

Cada pasta neste diretório contém exemplos de **"Antes" (Violação do princípio)** e **"Depois" (Aplicação do princípio)**.

### 1. S - Single Responsibility Principle (SRP)
> *Uma classe deve ter apenas um motivo para mudar.*
- **Foco:** Coesão. Cada classe deve executar apenas uma tarefa específica (ex: uma classe para lógica de negócio, outra para salvar logs).

### 2. O - Open/Closed Principle (OCP)
> *Entidades de software devem estar abertas para extensão, mas fechadas para modificação.*
- **Foco:** Uso de classes abstratas e interfaces para adicionar novos comportamentos sem alterar o código existente.

### 3. L - Liskov Substitution Principle (LSP)
> *Objetos de uma classe derivada devem poder substituir objetos da classe base sem quebrar a aplicação.*
- **Foco:** Garantir que a herança faça sentido e que subclasses não removam funcionalidades da classe pai.

### 4. I - Interface Segregation Principle (ISP)
> *Muitas interfaces específicas são melhores do que uma interface única e genérica.*
- **Foco:** Evitar que classes sejam forçadas a implementar métodos que elas não utilizam.

### 5. D - Dependency Inversion Principle (DIP)
> *Dependa de abstrações, não de implementações concretas.*
- **Foco:** Desacoplamento. Injeção de dependência e uso de interfaces para que módulos de alto nível não dependam de detalhes de baixo nível.

## 💻 Recursos de C++ Utilizados

Para aplicar esses princípios, exploramos:
- **Classes Abstratas:** Uso de funções virtuais puras (`virtual void method() = 0;`).
- **Injeção de Dependência:** Passagem de objetos via construtores usando `std::unique_ptr` ou `std::shared_ptr`.
- **Polimorfismo:** Garantindo extensibilidade via ponteiros/referências da classe base.

## 🚀 Como Explorar

Cada subdiretório possui seu próprio código fonte:
```bash
cd solid/DIP_DependencyInversion
g++ -std=c++17 main.cpp -o solid_example
./solid_example
Use o código com cuidado.

## 📝 Notas de Estudo
O SOLID não é uma regra rígida, mas um guia. O excesso de abstração pode levar a uma complexidade desnecessária (overengineering). O equilíbrio é a chave!

Desenvolvido para fins de estudo por mvdevelop
