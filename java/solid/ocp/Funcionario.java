
public class Funcionario {
    private String nome;
    private double salario;
    private RegraBonus regraBonus; // Composição: usamos a interface aqui

    public Funcionario(String nome, double salario, RegraBonus regraBonus) {
        this.nome = nome;
        this.salario = salario;
        this.regraBonus = regraBonus;
    }

    public double getBonus() {
        return regraBonus.calcular(this.salario);
    }

    @Override
    public String toString() {
        return nome + " - Salário: " + salario + " - Bônus: " + getBonus();
    }
}
