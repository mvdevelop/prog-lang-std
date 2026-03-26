package br.com.ex;

// Factory Method (Criacional)

interface Notificacao {
    void enviar(String mensagem);
}

class NotificacaoEmail implements Notificacao {
    public void enviar(String msg) { System.out.println("Email: " + msg); }
}

class NotificacaoSMS implements Notificacao {
    public void enviar(String msg) { System.out.println("SMS: " + msg); }
}

// A Factory
class NotificacaoFactory {
    public Notificacao criarNotificacao(String tipo) {
        if (tipo.equals("EMAIL")) return new NotificacaoEmail();
        if (tipo.equals("SMS")) return new NotificacaoSMS();
        throw new IllegalArgumentException("Tipo desconhecido");
    }
}
