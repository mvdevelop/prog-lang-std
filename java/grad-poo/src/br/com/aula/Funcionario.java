package br.com.aula;

// Superclasse (Herança)

public class Funcionario {
    private String nome;
    protected double salario;

    public Funcionario(String nome, double salario) {
        this.nome = nome;
        this.salario = salario;
    }

    // Método que será sobrescrito (Polimorfismo)
    public double calcularBonus() {
        return this.salario * 0.1; // Bônus padrão de 10%
    }

    public void exibirDados() {
        System.out.println("Nome: " + nome + " | Salário: R$ " + salario);
    }
}
