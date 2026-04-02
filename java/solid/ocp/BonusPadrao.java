
// Bônus padrão
public class BonusPadrao implements RegraBonus {
    public double calcular(double salario) { return salario * 0.10; }
}

// Bônus para Gerentes
public class BonusGerente implements RegraBonus {
    public double calcular(double salario) { return salario * 0.20; }
}

// NOVO: Bônus para Diretores (Adicionado sem mexer nas classes acima!)
public class BonusDiretor implements RegraBonus {
    public double calcular(double salario) { return salario * 0.50; }
}
