
<<<<<<< HEAD
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
=======
// Singleton.js

class ConfigManager {
  constructor() {
    if (ConfigManager.instance) {
      return ConfigManager.instance;
    }
    this.theme = "dark";
    this.apiToken = "12345-ABCDE";
    ConfigManager.instance = this;
  }

  getTheme() {
    return this.theme;
  }
}

// Uso:
const config1 = new ConfigManager();
const config2 = new ConfigManager();

console.log(config1 === config2); // true (são o mesmo objeto!)
>>>>>>> c71899f870bf206084a063cb26e6928107f00b38
