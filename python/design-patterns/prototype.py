
import copy

class Documento:
    def __init__(self, conteudo, metadados):
        self.conteudo = conteudo
        self.metadados = metadados # Ex: lista pesada de ler do disco

    def clone(self):
        return copy.deepcopy(self)

# Uso
doc_original = Documento("Relatório Mensal", {"autor": "IA", "versao": 1.0})
doc_copia = doc_original.clone()
doc_copia.conteudo = "Relatório Anual"

print(f"Original: {doc_original.conteudo}")
print(f"Cópia: {doc_copia.conteudo}")
