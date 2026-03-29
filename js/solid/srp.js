
/**
 * ERRO: Criar uma classe "Pedido" que gerencia lógica de negócio, 
 * persistência (Banco de Dados) e notificações (E-mail).
 * SOLUÇÃO: Separar cada responsabilidade em uma classe distinta.
 */

class Pedido {
    constructor(itens) {
        this.itens = itens;
    }

    calcularTotal() {
        return this.itens.reduce((acc, item) => acc + item.preco, 0);
    }
}

class PedidoRepository {
    salvar(pedido) {
        console.log("Salvando pedido no banco de dados...");
        // lógica do banco aqui
    }
}

class EmailService {
    enviarConfirmacao(pedido) {
        console.log("Enviando e-mail de confirmação do pedido...");
    }
}

// Exemplo de uso:
const meuPedido = new Pedido([{ nome: 'Mouse', preco: 150 }, { nome: 'Teclado', preco: 300 }]);
const repo = new PedidoRepository();
const mailer = new EmailService();

repo.salvar(meuPedido);
mailer.enviarConfirmacao(meuPedido);
