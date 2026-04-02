
public class Main {
    public static void main(String[] args) {
        // Criamos funcionários com regras diferentes sem mudar a classe Funcionario
        Funcionario f1 = new Funcionario("José", 2000, new BonusPadrao());
        Funcionario g1 = new Funcionario("Ana", 5000, new BonusGerente());
        Funcionario d1 = new Funcionario("Bia", 10000, new BonusDiretor());

        System.out.println(f1);
        System.out.println(g1);
        System.out.println(d1);
    }
}
