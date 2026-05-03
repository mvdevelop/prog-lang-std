
/*
ERRADO:
class Rectangle { setWidth(w); setHeight(h); area(); }
class Square extends Rectangle { ... } 
// Um quadrado altera o comportamento da largura ao mudar a altura, quebrando a lógica do Retângulo.
*/

interface Shape {
  getArea(): number;
}

class Rectangle implements Shape {
  constructor(private width: number, private height: number) {}
  getArea() { return this.width * this.height; }
}

class Square implements Shape {
  constructor(private side: number) {}
  getArea() { return this.side * this.side; }
}
