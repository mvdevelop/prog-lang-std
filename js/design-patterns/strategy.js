
// strategy.js

class Payment {
  constructor(strategy) {
    this.strategy = strategy;
  }

  pay(amount) {
    this.strategy.pay(amount);
  }
}

class CreditCard {
  pay(amount) {
    console.log(`Pago ${amount} com cartão`);
  }
}

class Pix {
  pay(amount) {
    console.log(`Pago ${amount} com PIX`);
  }
}

const payment1 = new Payment(new CreditCard());
payment1.pay(100);

const payment2 = new Payment(new Pix());
payment2.pay(200);
