
/* 
ERRADO:
class Order {
  calculateTotal() { ... }
  saveToDatabase() { ... } // A classe de negócio não deve salvar no banco
  sendEmail() { ... }      // Nem enviar e-mail
}
*/

class Order {
  public items: any[] = [];
  calculateTotal() {
    return this.items.reduce((sum, item) => sum + item.price, 0);
  }
}

class OrderRepository {
  save(order: Order) {
    console.log("Salvando pedido no banco de dados...");
  }
}

class MailService {
  sendConfirmation(order: Order) {
    console.log("Enviando e-mail de confirmação...");
  }
}
