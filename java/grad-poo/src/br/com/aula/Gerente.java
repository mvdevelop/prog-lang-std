package br.com.aula;

// Subclasse (Especialização)

public class Gerente extends Funcionario {
    
    public Gerente(String nome, double salario) {
        super(nome, salario);
    }

    @Override
    public double calcularBonus() {
        return this.salario * 0.2; // Gerente ganha 20%
    }
}
