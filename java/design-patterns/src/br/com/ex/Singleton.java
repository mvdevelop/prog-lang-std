package br.com.ex;

// Singleton (Criacional)

public class ConfiguracaoSistema {
    private static ConfiguracaoSistema instancia;
    private String tema;

    // Construtor privado impede instanciação externa
    private ConfiguracaoSistema() {
        this.tema = "Claro";
    }

    public static ConfiguracaoSistema getInstancia() {
        if (instancia == null) {
            instancia = new ConfiguracaoSistema();
        }
        return instancia;
    }

    public String getTema() { return tema; }
    public void setTema(String tema) { this.tema = tema; }
}
