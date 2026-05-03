
/*
ERRADO:
class Logger { log(msg) { ... } }
class App {
  logger = new Logger(); // App depende de uma classe concreta, difícil de testar ou trocar
}
*/

interface ILogger {
  log(message: string): void;
}

class ConsoleLogger implements ILogger {
  log(message: string) { console.log(`Log no console: ${message}`); }
}

class FileLogger implements ILogger {
  log(message: string) { console.log(`Log no arquivo: ${message}`); }
}

class App {
  constructor(private logger: ILogger) {} // Depende da abstração (interface)

  start() {
    this.logger.log("App iniciado.");
  }
}
