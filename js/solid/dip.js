
/**
 * ERRO: Depender de uma implementação concreta (ex: importar Axios direto dentro da classe).
 * SOLUÇÃO: Receber a dependência pelo construtor (Injeção de Dependência).
 */

// Esta classe não sabe QUEM faz a requisição, apenas que existe um "http" que tem o método .get()
class UsuarioService {
    constructor(httpClient) {
        this.http = httpClient;
    }

    async buscarUsuarios() {
        return await this.http.get('/usuarios');
    }
}

// No seu arquivo principal, você escolhe qual ferramenta usar:
const mockAxios = { 
    get: (url) => console.log(`Simulando GET no ${url} com Axios...`) 
};

const mockFetch = { 
    get: (url) => console.log(`Simulando GET no ${url} com Fetch API...`) 
};

// Injeção de dependência na prática:
const serviceComAxios = new UsuarioService(mockAxios);
const serviceComFetch = new UsuarioService(mockFetch);

serviceComAxios.buscarUsuarios();
