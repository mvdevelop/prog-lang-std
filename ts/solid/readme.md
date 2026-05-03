
# 🚀 SOLID com TypeScript

Este diretório contém exemplos práticos dos princípios **SOLID**, aplicados para criar um código mais limpo, flexível e fácil de manter.

## 📌 O que é SOLID?
SOLID é um acrônimo para cinco princípios de design de software orientado a objetos que facilitam o desenvolvimento e a escalabilidade.

---

### 📂 Estrutura dos Arquivos

1. **S - Single Responsibility Principle (SRP)**
   - *Uma classe deve ter apenas um motivo para mudar.*
   - **Foco:** Separação de interesses (Lógica de negócio vs. Persistência vs. Notificação).

2. **O - Open/Closed Principle (OCP)**
   - *Aberto para extensão, fechado para modificação.*
   - **Foco:** Uso de interfaces e polimorfismo para adicionar novos comportamentos sem alterar o código existente.

3. **L - Liskov Substitution Principle (LSP)**
   - *Subclasses devem ser substituíveis por suas classes base.*
   - **Foco:** Garantir que heranças não quebrem a lógica esperada do sistema.

4. **I - Interface Segregation Principle (ISP)**
   - *Muitas interfaces específicas são melhores que uma interface geral.*
   - **Foco:** Evitar que classes sejam forçadas a implementar métodos que não utilizam.

5. **D - Dependency Inversion Principle (DIP)**
   - *Dependa de abstrações, não de implementações concretas.*
   - **Foco:** Injeção de dependência para desacoplar componentes e facilitar testes unitários.

---

### 🛠️ Como usar este guia
Cada arquivo segue o padrão:
- **Topo (Comentado):** Exemplo do código quebrando o princípio (**Anti-padrão**).
- **Corpo:** Implementação corrigida aplicando o princípio SOLID.

### 🚀 Como rodar os exemplos
Se você tiver o `ts-node` instalado, pode testar qualquer arquivo diretamente:
```bash
# Exemplo
ts-node nome-do-arquivo.ts
```

---
> *Este repositório serve como material de consulta e estudo para fundamentos de Arquitetura de Software.*
