
# 001 - Automação e Manipulação de Dados (Pandas)

import pandas as pd

# Simulando dados de vendas
dados = {
    'Produto': ['Notebook', 'Mouse', 'Teclado', 'Monitor'],
    'Preço': [4500, 150, 300, 1200],
    'Quantidade': [2, 10, 5, 3]
}

df = pd.DataFrame(dados)

# RAD: Criando uma coluna de 'Total' em 1 linha
df['Total'] = df['Preço'] * df['Quantidade']

# Filtrando apenas vendas acima de 1000 reais
vendas_altas = df[df['Total'] > 1000]

print("--- Relatório de Vendas Altas ---")
print(vendas_altas)
