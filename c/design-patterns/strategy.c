
#include <stdio.h>

// Definimos o "contrato" da função
typedef void (*AlgoritmoPagamento)(float valor);

// Implementações diferentes
void pagar_pix(float valor) { printf("Pago R$%.2f via Pix.\n", valor); }
void pagar_cartao(float valor) { printf("Pago R$%.2f via Cartão.\n", valor); }

// Contexto que usa a estratégia
void finalizar_compra(float valor, AlgoritmoPagamento metodo) {
    metodo(valor);
}

int main() {
    finalizar_compra(150.0, pagar_pix);
    finalizar_compra(80.5, pagar_cartao);
    return 0;
}
