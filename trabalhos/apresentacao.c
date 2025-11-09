#include <stdio.h>
#include <string.h>

#define MAX_VOOS 50

// Estrutura de um voo
typedef struct {
    int id;
    char origem[10];
    char destino[10];
    char horario[6]; // formato "HH:MM"
} Voo;

void listarVoos(Voo voos[], int total) {
    if (total == 0) {
        printf("\nNenhum voo cadastrado.\n");
        return;
    }
    printf("\n--- LISTA DE VOOS ---\n");
    for (int i = 0; i < total; i++) {
        printf("[%d] %s -> %s  Horario: %s\n",
               voos[i].id, voos[i].origem, voos[i].destino, voos[i].horario);
    }
}

void adicionarVoo(Voo voos[], int *total) {
    if (*total >= MAX_VOOS) {
        printf("Limite de voos atingido!\n");
        return;
    }

    Voo novo;
    novo.id = *total + 1;

    printf("Origem: ");
    scanf("%s", novo.origem);

    printf("Destino: ");
    scanf("%s", novo.destino);

    printf("Horario (HH:MM): ");
    scanf("%s", novo.horario);

    voos[*total] = novo;
    (*total)++;

    printf("Voo adicionado com sucesso!\n");
}

void removerVoo(Voo voos[], int *total) {
    int id;
    printf("Digite o ID do voo que deseja remover: ");
    scanf("%d", &id);

    int encontrado = -1;
    for (int i = 0; i < *total; i++) {
        if (voos[i].id == id) {
            encontrado = i;
            break;
        }
    }

    if (encontrado == -1) {
        printf("Voo nao encontrado.\n");
        return;
    }

    for (int i = encontrado; i < *total - 1; i++) {
        voos[i] = voos[i + 1];
        voos[i].id = i + 1; // atualiza IDs
    }
    (*total)--;

    printf("Voo removido com sucesso!\n");
}

void buscarPorOrigem(Voo voos[], int total) {
    char origemBuscada[10];
    printf("Digite a origem para buscar: ");
    scanf("%s", origemBuscada);

    int achou = 0;
    printf("\nVoos saindo de %s:\n", origemBuscada);
    for (int i = 0; i < total; i++) {
        if (strcmp(voos[i].origem, origemBuscada) == 0) {
            printf("[%d] %s -> %s  Horario: %s\n",
                   voos[i].id, voos[i].origem, voos[i].destino, voos[i].horario);
            achou = 1;
        }
    }

    if (!achou) printf("Nenhum voo encontrado.\n");
}

int main() {
    Voo voos[MAX_VOOS];
    int total = 0;
    int opcao;

    do {
        printf("\n=== GERENCIADOR DE HORARIOS DE VOOS ===\n");
        printf("1 - Listar voos\n");
        printf("2 - Adicionar voo\n");
        printf("3 - Remover voo\n");
        printf("4 - Buscar por origem\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: listarVoos(voos, total); break;
            case 2: adicionarVoo(voos, &total); break;
            case 3: removerVoo(voos, &total); break;
            case 4: buscarPorOrigem(voos, total); break;
            case 5: printf("Encerrando o programa...\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 5);

    return 0;
}
