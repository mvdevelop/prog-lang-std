
/*
ERRADO:
interface SmartDevice {
  print();
  scan();
  fax();
}
class BasicPrinter implements SmartDevice {
  print() { ... }
  scan() { throw new Error("Não suportado"); } // Forçado a implementar o que não usa
}
*/

interface Printer {
  print(): void;
}

interface Scanner {
  scan(): void;
}

class SimplePrinter implements Printer {
  print() { console.log("Imprimindo..."); }
}

class AllInOnePrinter implements Printer, Scanner {
  print() { console.log("Imprimindo..."); }
  scan() { console.log("Escaneando..."); }
}
