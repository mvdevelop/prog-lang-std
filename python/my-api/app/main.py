
# app/main.py
from fastapi import FastAPI, HTTPException
from pydantic import BaseModel
from typing import Optional

app = FastAPI(title="My Simple API", version="0.1")

# modelo de request/response
class Item(BaseModel):
    id: int
    name: str
    description: Optional[str] = None
    price: float

# "banco" em memória
DB = {
    1: {"id": 1, "name": "Caneta", "description": "Azul", "price": 2.5},
    2: {"id": 2, "name": "Caderno", "description": "100 folhas", "price": 12.0},
}

@app.get("/")
def read_root():
    return {"message": "API rodando — acesse /docs para a documentação"}

@app.get("/items")
def list_items():
    return list(DB.values())

@app.get("/items/{item_id}", response_model=Item)
def get_item(item_id: int):
    item = DB.get(item_id)
    if not item:
        raise HTTPException(status_code=404, detail="Item não encontrado")
    return item

@app.post("/items", response_model=Item, status_code=201)
def create_item(item: Item):
    if item.id in DB:
        raise HTTPException(status_code=400, detail="ID já existe")
    DB[item.id] = item.dict()
    return DB[item.id]

@app.put("/items/{item_id}", response_model=Item)
def update_item(item_id: int, item: Item):
    if item_id != item.id:
        raise HTTPException(status_code=400, detail="ID no body não confere com o path")
    if item_id not in DB:
        raise HTTPException(status_code=404, detail="Item não encontrado")
    DB[item_id] = item.dict()
    return DB[item_id]

@app.delete("/items/{item_id}", status_code=204)
def delete_item(item_id: int):
    if item_id not in DB:
        raise HTTPException(status_code=404, detail="Item não encontrado")
    del DB[item_id]
    return None
