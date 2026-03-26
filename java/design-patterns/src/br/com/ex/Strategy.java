package br.com.ex;

// Strategy (Comportamental)

// Interface da estratégia
interface Imposto {
    double calcular(double valor);
}

// Estratégias concretas
class ICMS implements Imposto {
    public double calcular(double valor) { return valor * 0.18; }
}

class ISS implements Imposto {
    public double calcular(double valor) { return valor * 0.05; }
}

// Calculadora que usa a estratégia
class CalculadoraDeImposto {
    public void realizarCalculo(double valor, Imposto imposto) {
        System.out.println("Imposto: " + imposto.calcular(valor));
    }
}
