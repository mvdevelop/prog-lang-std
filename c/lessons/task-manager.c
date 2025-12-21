
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_TAREFAS 100
#define MAX_TEXTO 256
#define ARQUIVO_TAREFAS "tarefas.dat"

// Estrutura para representar uma tarefa
typedef struct {
    int id;
    char descricao[MAX_TEXTO];
    int prioridade;  // 1-baixa, 2-media, 3-alta
    int concluida;   // 0-não, 1-sim
    char data_criacao[11];  // formato: DD/MM/AAAA
} Tarefa;

// Protótipos das funções
void exibir_menu();
void adicionar_tarefa(Tarefa tarefas[], int *contador);
void listar_tarefas(Tarefa tarefas[], int contador);
void buscar_tarefa(Tarefa tarefas[], int contador);
void marcar_concluida(Tarefa tarefas[], int contador);
void remover_tarefa(Tarefa tarefas[], int *contador);
void salvar_tarefas(Tarefa tarefas[], int contador);
void carregar_tarefas(Tarefa tarefas[], int *contador);
void limpar_buffer();

int main() {
    Tarefa tarefas[MAX_TAREFAS];
    int contador = 0;
    int opcao;
    
    // Carregar tarefas salvas
    carregar_tarefas(tarefas, &contador);
    
    printf("========================================\n");
    printf("      GERENCIADOR DE TAREFAS v1.0\n");
    printf("========================================\n");
    
    do {
        exibir_menu();
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        limpar_buffer();
        
        switch(opcao) {
            case 1:
                adicionar_tarefa(tarefas, &contador);
                break;
            case 2:
                listar_tarefas(tarefas, contador);
                break;
            case 3:
                buscar_tarefa(tarefas, contador);
                break;
            case 4:
                marcar_concluida(tarefas, contador);
                break;
            case 5:
                remover_tarefa(tarefas, &contador);
                break;
            case 6:
                printf("Salvando tarefas...\n");
                salvar_tarefas(tarefas, contador);
                printf("Tarefas salvas com sucesso!\n");
                break;
            case 7:
                printf("Saindo do programa. Adeus!\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
        
        printf("\n");
    } while(opcao != 7);
    
    return 0;
}

void exibir_menu() {
    printf("\n---------- MENU PRINCIPAL ----------\n");
    printf("1. Adicionar nova tarefa\n");
    printf("2. Listar todas as tarefas\n");
    printf("3. Buscar tarefa por descricao\n");
    printf("4. Marcar tarefa como concluida\n");
    printf("5. Remover tarefa\n");
    printf("6. Salvar tarefas no arquivo\n");
    printf("7. Sair\n");
    printf("------------------------------------\n");
}

void adicionar_tarefa(Tarefa tarefas[], int *contador) {
    if (*contador >= MAX_TAREFAS) {
        printf("Limite de tarefas atingido!\n");
        return;
    }
    
    Tarefa nova;
    nova.id = *contador + 1;
    
    printf("Digite a descricao da tarefa: ");
    fgets(nova.descricao, MAX_TEXTO, stdin);
    nova.descricao[strcspn(nova.descricao, "\n")] = 0;  // Remove o \n
    
    printf("Digite a prioridade (1-Baixa, 2-Media, 3-Alta): ");
    scanf("%d", &nova.prioridade);
    
    nova.concluida = 0;  // Tarefa não concluída por padrão
    
    printf("Digite a data de criacao (DD/MM/AAAA): ");
    scanf("%s", nova.data_criacao);
    
    limpar_buffer();
    
    tarefas[*contador] = nova;
    (*contador)++;
    
    printf("Tarefa adicionada com sucesso! (ID: %d)\n", nova.id);
}

void listar_tarefas(Tarefa tarefas[], int contador) {
    if (contador == 0) {
        printf("Nenhuma tarefa cadastrada.\n");
        return;
    }
    
    printf("\n========== LISTA DE TAREFAS ==========\n");
    for (int i = 0; i < contador; i++) {
        char status[15];
        char prioridade[10];
        
        // Define o texto do status
        if (tarefas[i].concluida) {
            strcpy(status, "CONCLUIDA");
        } else {
            strcpy(status, "PENDENTE");
        }
        
        // Define o texto da prioridade
        switch(tarefas[i].prioridade) {
            case 1: strcpy(prioridade, "Baixa"); break;
            case 2: strcpy(prioridade, "Media"); break;
            case 3: strcpy(prioridade, "Alta"); break;
            default: strcpy(prioridade, "Indefinida");
        }
        
        printf("ID: %d\n", tarefas[i].id);
        printf("Descricao: %s\n", tarefas[i].descricao);
        printf("Prioridade: %s\n", prioridade);
        printf("Status: %s\n", status);
        printf("Data de criacao: %s\n", tarefas[i].data_criacao);
        printf("------------------------------------\n");
    }
    printf("Total de tarefas: %d\n", contador);
}

void buscar_tarefa(Tarefa tarefas[], int contador) {
    if (contador == 0) {
        printf("Nenhuma tarefa cadastrada.\n");
        return;
    }
    
    char termo[MAX_TEXTO];
    printf("Digite o termo de busca: ");
    fgets(termo, MAX_TEXTO, stdin);
    termo[strcspn(termo, "\n")] = 0;  // Remove o \n
    
    // Converter para minúsculas para busca case-insensitive
    char termo_lower[MAX_TEXTO];
    strcpy(termo_lower, termo);
    for (int i = 0; termo_lower[i]; i++) {
        termo_lower[i] = tolower(termo_lower[i]);
    }
    
    printf("\n========== RESULTADOS DA BUSCA ==========\n");
    int encontradas = 0;
    
    for (int i = 0; i < contador; i++) {
        char desc_lower[MAX_TEXTO];
        strcpy(desc_lower, tarefas[i].descricao);
        
        // Converter descrição para minúsculas
        for (int j = 0; desc_lower[j]; j++) {
            desc_lower[j] = tolower(desc_lower[j]);
        }
        
        // Buscar termo na descrição
        if (strstr(desc_lower, termo_lower) != NULL) {
            printf("ID: %d | Descricao: %s\n", 
                   tarefas[i].id, tarefas[i].descricao);
            encontradas++;
        }
    }
    
    if (encontradas == 0) {
        printf("Nenhuma tarefa encontrada com o termo: '%s'\n", termo);
    } else {
        printf("Total encontrado: %d tarefa(s)\n", encontradas);
    }
}

void marcar_concluida(Tarefa tarefas[], int contador) {
    if (contador == 0) {
        printf("Nenhuma tarefa cadastrada.\n");
        return;
    }
    
    int id;
    printf("Digite o ID da tarefa a marcar como concluida: ");
    scanf("%d", &id);
    limpar_buffer();
    
    int encontrada = 0;
    for (int i = 0; i < contador; i++) {
        if (tarefas[i].id == id) {
            if (!tarefas[i].concluida) {
                tarefas[i].concluida = 1;
                printf("Tarefa ID %d marcada como concluida!\n", id);
            } else {
                printf("Tarefa ID %d ja esta concluida.\n", id);
            }
            encontrada = 1;
            break;
        }
    }
    
    if (!encontrada) {
        printf("Tarefa com ID %d nao encontrada.\n", id);
    }
}

void remover_tarefa(Tarefa tarefas[], int *contador) {
    if (*contador == 0) {
        printf("Nenhuma tarefa cadastrada.\n");
        return;
    }
    
    int id;
    printf("Digite o ID da tarefa a remover: ");
    scanf("%d", &id);
    limpar_buffer();
    
    int posicao = -1;
    
    // Encontrar a posição da tarefa
    for (int i = 0; i < *contador; i++) {
        if (tarefas[i].id == id) {
            posicao = i;
            break;
        }
    }
    
    if (posicao == -1) {
        printf("Tarefa com ID %d nao encontrada.\n", id);
        return;
    }
    
    // Confirmar remoção
    char confirmacao;
    printf("Tem certeza que deseja remover a tarefa '%s'? (s/n): ", 
           tarefas[posicao].descricao);
    scanf("%c", &confirmacao);
    limpar_buffer();
    
    if (confirmacao == 's' || confirmacao == 'S') {
        // Mover todas as tarefas após a removida uma posição para frente
        for (int i = posicao; i < *contador - 1; i++) {
            tarefas[i] = tarefas[i + 1];
        }
        
        (*contador)--;
        printf("Tarefa removida com sucesso!\n");
    } else {
        printf("Remocao cancelada.\n");
    }
}

void salvar_tarefas(Tarefa tarefas[], int contador) {
    FILE *arquivo = fopen(ARQUIVO_TAREFAS, "wb");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo para escrita.\n");
        return;
    }
    
    // Escrever o número de tarefas
    fwrite(&contador, sizeof(int), 1, arquivo);
    
    // Escrever cada tarefa
    for (int i = 0; i < contador; i++) {
        fwrite(&tarefas[i], sizeof(Tarefa), 1, arquivo);
    }
    
    fclose(arquivo);
}

void carregar_tarefas(Tarefa tarefas[], int *contador) {
    FILE *arquivo = fopen(ARQUIVO_TAREFAS, "rb");
    
    if (arquivo == NULL) {
        printf("Nenhum arquivo de tarefas encontrado. Criando novo.\n");
        *contador = 0;
        return;
    }
    
    // Ler o número de tarefas
    fread(contador, sizeof(int), 1, arquivo);
    
    // Ler cada tarefa
    for (int i = 0; i < *contador; i++) {
        fread(&tarefas[i], sizeof(Tarefa), 1, arquivo);
    }
    
    fclose(arquivo);
    printf("Tarefas carregadas: %d\n", *contador);
}

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}