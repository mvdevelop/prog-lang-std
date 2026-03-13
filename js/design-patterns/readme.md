
# JavaScript Design Patterns Examples

Este repositório contém exemplos práticos de **Design Patterns implementados em JavaScript**, com foco em aplicações reais no desenvolvimento **Node.js e Frontend**.

O objetivo é demonstrar como aplicar padrões de projeto para melhorar:

* organização do código
* reutilização
* manutenção
* escalabilidade

Os exemplos são simples, didáticos e independentes, podendo ser usados como referência ou material de estudo.

---

## 📚 Design Patterns Implementados

### 1. Singleton

Garante que apenas **uma única instância de uma classe** exista durante a execução da aplicação.

Uso comum:

* conexões com banco de dados
* gerenciadores de configuração
* loggers

Arquivo:

```
singleton.js
```

---

### 2. Factory

Centraliza a **criação de objetos**, escondendo a lógica de instância.

Uso comum:

* criação de serviços
* criação de usuários com papéis diferentes
* instância dinâmica de classes

Arquivo:

```
factory.js
```

---

### 3. Observer

Permite que múltiplos objetos **observem mudanças de estado** em outro objeto.

Base para sistemas de eventos.

Uso comum:

* event systems
* notificações
* gerenciamento de estado

Arquivo:

```
observer.js
```

---

### 4. Module Pattern

Encapsula lógica e mantém **variáveis privadas**, expondo apenas o necessário.

Uso comum:

* bibliotecas JavaScript
* utilitários
* organização de código frontend

Arquivo:

```
module.js
```

---

### 5. Strategy

Permite trocar **algoritmos dinamicamente** em tempo de execução.

Uso comum:

* sistemas de pagamento
* validações diferentes
* cálculos com múltiplas regras

Arquivo:

```
strategy.js
```

---

### 6. Decorator

Adiciona funcionalidades a funções ou objetos **sem modificar o código original**.

Uso comum:

* logging
* autenticação
* monitoramento

Arquivo:

```
decorator.js
```

---

### 7. Builder

Permite criar objetos complexos **passo a passo**, deixando a construção mais clara e flexível.

Uso comum:

* criação de objetos complexos
* configuração de entidades
* construção de queries

Arquivo:

```
builder.js
```

---

## ▶️ Como executar os exemplos

Certifique-se de ter o **Node.js instalado**.

Execute qualquer exemplo com:

```bash
node nome-do-arquivo.js
```

Exemplo:

```bash
node singleton.js
```

---

## 📁 Estrutura do projeto

```
design-patterns-js/
│
├── singleton.js
├── factory.js
├── observer.js
├── module.js
├── strategy.js
├── decorator.js
├── builder.js
│
└── README.md
```

---

## 🎯 Objetivo

Este projeto foi criado para:

* estudo de **Design Patterns**
* referência rápida para desenvolvedores
* demonstração de boas práticas em JavaScript

---

## 🚀 Tecnologias

* JavaScript (ES6+)
* Node.js

---

## 📖 Referências

* *Design Patterns: Elements of Reusable Object-Oriented Software* (Gang of Four)
* Documentação oficial do JavaScript
* Boas práticas de arquitetura de software

---

## 👨‍💻 Autor

Desenvolvido para fins de estudo e demonstração de **Design Patterns em JavaScript**.
