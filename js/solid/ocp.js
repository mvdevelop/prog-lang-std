
/**
 * ERRO: Alterar uma função existente (adicionando IF/ELSE) toda vez que 
 * surge uma nova regra de negócio (ex: novo tipo de desconto).
 * SOLUÇÃO: Usar um objeto de mapeamento ou polimorfismo para estender sem modificar.
 */

const estrategiasDeDesconto = {
    NATAL: (valor) => valor * 0.9,
    BLACK_FRIDAY: (valor) => valor * 0.7,
    DIA_DOS_PAIS: (valor) => valor * 0.85,
    // Para adicionar um novo, basta criar a linha aqui, sem mexer na função abaixo.
};

function aplicarDesconto(valor, tipo) {
    const estrategia = estrategiasDeDesconto[tipo];
    
    if (!estrategia) {
        return valor; // Sem desconto se o tipo não existir
    }

    return estrategia(valor);
}

// Exemplo de uso:
console.log("Preço Natal:", aplicarDesconto(100, 'NATAL'));
console.log("Preço Black Friday:", aplicarDesconto(100, 'BLACK_FRIDAY'));
