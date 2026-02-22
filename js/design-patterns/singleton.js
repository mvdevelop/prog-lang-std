
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
