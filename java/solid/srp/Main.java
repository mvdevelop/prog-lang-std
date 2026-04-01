
package solid.srp;

public class Main {
    public static void main(String[] args) {
        Relatorio relatorio = new Relatorio();
        RelatorioRepository repository = new RelatorioRepository();
        
        repository.salvar(relatorio);
        System.out.println("Processo finalizado com SRP!");
    }
}
