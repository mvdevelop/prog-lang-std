
#include <stdio.h>

typedef struct {
    int configuracao;
} Gerenciador;

Gerenciador* get_instance() {
    static Gerenciador instancia; // Criada uma única vez na primeira chamada
    return &instancia;
}

int main() {
    Gerenciador *s1 = get_instance();
    s1->configuracao = 100;

    Gerenciador *s2 = get_instance();
    printf("Valor em s2: %d\n", s2->configuracao); // Saída: 100
    return 0;
}
