
## 🎨 Design Patterns em C
Este diretório contém implementações de padrões de projeto (Design Patterns) adaptados para a linguagem C.
Embora o C não seja uma linguagem orientada a objetos (OO) nativa, é perfeitamente possível aplicar padrões clássicos do "GoF" (Gang of Four) utilizando structs, ponteiros de função e o conceito de encapsulamento via arquivos .h e .c.

## 📑 Padrões Implementados
Padrão	Categoria	Descrição Curta
Singleton	Criacional	Garante uma única instância de uma struct global ou estática.
Strategy	Comportamental	Permite trocar algoritmos (funções) em tempo de execução.
State	Comportamental	Altera o comportamento de um objeto quando seu estado interno muda (Máquina de Estados).
Observer	Comportamental	Define uma dependência um-para-muitos (sistema de eventos/callbacks).
Factory	Criacional	Abstrai a lógica de alocação e inicialização de "objetos" (structs).

## 🚀 Como compilar e rodar
Cada exemplo é autocontido para facilitar o estudo. Você pode compilar qualquer um deles usando o gcc:
bash
# Exemplo com o Strategy
gcc strategy.c -o strategy
./strategy
Use o código com cuidado.

## 🧠 Por que usar Patterns em C?
Desacoplamento: Facilita a troca de lógica de hardware ou drivers sem quebrar o código principal.
Organização: Substitui grandes blocos de if/else ou switch/case por estruturas mais limpas e extensíveis.
Reutilização: Cria componentes que podem ser movidos entre diferentes projetos de sistemas embarcados ou firmware.

## 🛠️ Simulando OO em C
Para os padrões funcionarem bem, utilizamos algumas técnicas comuns:
Encapsulamento: Definimos a struct no .c e apenas o typedef no .h (Opaque Pointers).
Polimorfismo: Simulamos através de ponteiros de função dentro das structs (VTable manual).
