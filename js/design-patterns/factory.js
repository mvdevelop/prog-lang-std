
// Factory.js

class CursoIngles {
  constructor() { this.nome = "Inglês"; this.preco = 100; }
}

class CursoEspanhol {
  constructor() { this.nome = "Espanhol"; this.preco = 80; }
}

class CursoFactory {
  static criarCurso(tipo) {
    if (tipo === 'EN') return new CursoIngles();
    if (tipo === 'ES') return new CursoEspanhol();
    throw new Error("Curso não disponível");
  }
}

// Uso:
const meuCurso = CursoFactory.criarCurso('EN');
console.log(`Inscrito em: ${meuCurso.nome} - R$${meuCurso.preco}`);
