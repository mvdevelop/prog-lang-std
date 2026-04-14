
typedef struct Formato Formato;

struct Formato {
    void (*desenhar)(Formato* self);
};

void desenharFormato(Formato* f) {
    f->desenhar(f);
}

// Para adicionar um novo formato (como Triângulo), não mexemos no código acima.
// Apenas criamos uma nova implementação.
