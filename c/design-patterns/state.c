
struct Estado;
typedef void (*Acao)(struct Estado*);

typedef struct Estado {
    Acao proximo_passo;
} Estado;

void ligar(Estado* e);
void desligar(Estado* e) {
    printf("Desligando...\n");
    e->proximo_passo = ligar;
}

void ligar(Estado* e) {
    printf("Ligando...\n");
    e->proximo_passo = desligar;
}

int main() {
    Estado maquina = { ligar };
    maquina.proximo_passo(&maquina); // Ligando...
    maquina.proximo_passo(&maquina); // Desligando...
    return 0;
}
