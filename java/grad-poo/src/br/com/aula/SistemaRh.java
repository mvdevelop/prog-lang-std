package br.com.aula;

// A Classe Principal (Execução) 

public class SistemaRh {
    public static void main(String[] args) {
        // Criando os objetos
        Funcionario f1 = new Funcionario("João Silva", 3000.0);
        Gerente g1 = new Gerente("Maria Souza", 8000.0);

        System.out.println("--- Dados dos Funcionários ---");
        
        f1.exibirDados();
        System.out.println("Bônus João: R$ " + f1.calcularBonus());

        g1.exibirDados();
        System.out.println("Bônus Maria: R$ " + g1.calcularBonus());
    }
}
