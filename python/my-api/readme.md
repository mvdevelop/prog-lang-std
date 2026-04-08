
## 🚀 My Simple API (FastAPI RAD)
Uma API RESTful minimalista construída com FastAPI e Pydantic, seguindo os princípios de desenvolvimento rápido (RAD) para gerenciamento de itens.

## ✨ Características
CRUD Completo: Listagem, consulta, criação, atualização e exclusão de itens.
Validação de Dados: Tipagem forte com Pydantic.
Documentação Automática: Swagger UI integrada.
Persistência Local: Banco de dados em memória para prototipagem rápida.

## 🛠️ Pré-requisitos
Python 3.10+
FastAPI
Uvicorn (servidor ASGI)

## 🚀 Como começar
Instale as dependências:
bash
pip install fastapi uvicorn
Use o código com cuidado.

Execute o servidor:
bash
uvicorn app.main:app --reload
Use o código com cuidado.

Acesse a API:
Local: http://127.0.0.1:8000
Documentação Interativa (Swagger): http://127.0.0

## 📡 Endpoints Principais
Método	Endpoint	Descrição
GET	/items	Lista todos os itens do banco.
GET	/items/{id}	Busca um item específico pelo ID.
POST	/items	Cria um novo item (requer ID único).
PUT	/items/{id}	Atualiza um item existente.
DELETE	/items/{id}	Remove um item do banco.

## 📦 Modelo de Dados (Item)
json
{
  "id": 1,
  "name": "Nome do Produto",
  "description": "Descrição opcional",
  "price": 0.0
}
Use o código com cuidado.

## 📝 Licença
Distribuído sob a licença MIT. Veja LICENSE para mais informações.

⚡ Protótipo funcional gerado para máxima produtividade.
