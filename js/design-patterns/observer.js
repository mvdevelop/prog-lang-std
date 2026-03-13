
<<<<<<< HEAD
// observer.js

class Subject {
  constructor() {
    this.observers = [];
  }

  subscribe(fn) {
    this.observers.push(fn);
  }

  notify(data) {
    this.observers.forEach(fn => fn(data));
  }
}

const subject = new Subject();

subject.subscribe(data => {
  console.log("Observer 1:", data);
});

subject.subscribe(data => {
  console.log("Observer 2:", data);
});

subject.notify("Novo evento!");
=======
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
>>>>>>> c71899f870bf206084a063cb26e6928107f00b38
