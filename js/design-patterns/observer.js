
// Observer.js

class Newsletter {
  constructor() {
    this.subscribers = [];
  }

  subscribe(callback) {
    this.subscribers.push(callback);
  }

  notify(message) {
    this.subscribers.forEach(cb => cb(message));
  }
}

// Uso:
const escolaIdiomas = new Newsletter();

escolaIdiomas.subscribe(msg => console.log(`Aluno João recebeu: ${msg}`));
escolaIdiomas.subscribe(msg => console.log(`Aluna Maria recebeu: ${msg}`));

escolaIdiomas.notify("Nova aula de Inglês disponível!");
