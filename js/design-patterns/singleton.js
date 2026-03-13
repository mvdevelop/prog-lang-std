
// singleton.js

class Database {
  constructor() {
    if (Database.instance) {
      return Database.instance;
    }

    this.connection = "Conectado ao banco";
    Database.instance = this;
  }

  connect() {
    console.log(this.connection);
  }
}

const db1 = new Database();
const db2 = new Database();

console.log(db1 === db2); // true
