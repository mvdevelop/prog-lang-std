
<<<<<<< HEAD
// factory.js

class User {
  constructor(name) {
    this.name = name;
  }
}

class Admin {
  constructor(name) {
    this.name = name;
    this.role = "admin";
  }
}

function userFactory(type, name) {
  if (type === "admin") {
    return new Admin(name);
  }

  return new User(name);
}

const user1 = userFactory("user", "João");
const user2 = userFactory("admin", "Maria");

console.log(user1);
console.log(user2);
=======
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
>>>>>>> c71899f870bf206084a063cb26e6928107f00b38
