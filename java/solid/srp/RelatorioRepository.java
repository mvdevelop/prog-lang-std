
package solid.srp;

public class RelatorioRepository {
    public void salvar(Relatorio relatorio) {
        // Simula a gravação no banco de dados
        System.out.println("Salvando no Banco: " + relatorio.obterConteudo());
    }
}
