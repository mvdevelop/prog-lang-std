
# API Rápida com Persistência (FastAPI + SQLModel)

from fastapi import FastAPI
from sqlmodel import Field, SQLModel, Session, create_engine

# Definindo o modelo do Banco de Dados
class Item(SQLModel, table=True):
    id: int | None = Field(default=None, primary_key=True)
    nome: str
    preco: float

# Criando o banco de dados SQLite localmente
engine = create_engine("sqlite:///database.db")
SQLModel.metadata.create_all(engine)

app = FastAPI()

@app.post("/itens/")
def criar_item(item: Item):
    with Session(engine) as session:
        session.add(item)
        session.commit()
        session.refresh(item)
        return item
