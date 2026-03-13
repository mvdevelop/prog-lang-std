
# 002 - Interface Web Instantânea (Streamlit)

import streamlit as st

st.title("Meu Primeiro App RAD 🚀")

nome = st.text_input("Qual seu nome?")
numero = st.slider("Selecione um nível de satisfação", 0, 100)

if st.button("Enviar Dados"):
    st.write(f"Olá {nome}! Seu nível de satisfação registrado foi: {numero}%")
    st.balloons() # Um toque de "mágica" visual    
