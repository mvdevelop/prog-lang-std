
# Design Patterns em Python: Padrões Criacionais 🚀

Este diretório contém implementações práticas e didáticas dos principais **Padrões de Projeto Criacionais**. O objetivo desses padrões é abstrair o processo de instanciação de objetos, tornando o sistema independente de como seus objetos são criados, compostos e representados.

## 📋 Padrões Implementados

### 1. Factory Method (Método de Fábrica)
Define uma interface para criar um objeto, mas deixa as subclasses decidirem qual classe instanciar.
- **Problema:** O código precisa criar objetos de diferentes tipos (ex: SMS, E-mail) sem se acoplar às classes concretas.
- **Solução:** Centraliza a lógica de criação em uma classe "Fábrica".

### 2. Singleton (Instância Única)
Garante que uma classe tenha apenas uma instância e fornece um ponto global de acesso a ela.
- **Problema:** Recursos compartilhados que não podem ter múltiplas cópias (ex: Conexão com Banco de Dados, Loggers).
- **Solução:** O método `__new__` controla a criação para retornar sempre a mesma instância.

### 3. Builder (Construtor Passo a Passo)
Separa a construção de um objeto complexo da sua representação.
- **Problema:** Objetos que exigem muitos parâmetros no construtor ou diferentes configurações de montagem (ex: Pedido de Pizza, Montagem de Carro).
- **Solução:** Permite a criação do objeto passo a passo através de métodos encadeados.

### 4. Prototype (Clonagem de Objetos)
Permite copiar objetos existentes sem tornar seu código dependente de suas classes.
- **Problema:** Quando a criação de um novo objeto do zero é custosa em termos de processamento ou memória.
- **Solução:** Utiliza a interface de clonagem (deepcopy) para gerar novas instâncias a partir de um protótipo.

## 🛠️ Como Executar

Certifique-se de ter o Python 3.x instalado. Basta executar cada script individualmente:

```bash
python nome_do_arquivo.py
Use o código com cuidado.

🧠 Por que usar Design Patterns?
Manutenibilidade: Código mais fácil de ler e corrigir.
Escalabilidade: Adicionar novos recursos sem quebrar o que já funciona.
Padronização: Vocabulário comum entre desenvolvedores.
Desenvolvido para estudos de Arquitetura de Software.
