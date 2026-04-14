
// Abstração (Interface)
typedef struct {
    void (*enviar)(const char* msg);
} ServicoNotificacao;

// O sistema de Alerta usa a abstração, não sabe se é Email ou SMS
void dispararAlerta(ServicoNotificacao* servico) {
    servico->enviar("Cuidado!");
}
