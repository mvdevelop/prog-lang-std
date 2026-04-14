
typedef struct {
    void (*falar)();
} Animal;

typedef struct {
    Animal base; // Deve ser o primeiro membro
    int nivelFofura;
} Gato;

void fazerAnimalFalar(Animal* a) {
    a->falar();
}

// Um ponteiro de Gato pode ser passado como Animal com segurança
