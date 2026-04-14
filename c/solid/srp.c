
#include <stdio.h>

// A struct apenas armazena dados
typedef struct {
    char nome[50];
} Usuario;

// A lógica de exibição/saída fica em outra função/módulo
void imprimirUsuario(Usuario* u) {
    printf("Usuário: %s\n", u->nome);
}

// A lógica de persistência ficaria em outro lugar
void salvarNoBanco(Usuario* u) {
    // Código para salvar...
}
