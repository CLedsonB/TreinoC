#include <stdio.h>
#include <stdlib.h>

struct Registro {
    int id;
    char nome[50];
    int idade;
};

void criar(struct Registro* registros, int* count) {
    printf("Digite o ID: ");
    scanf("%d", &(registros[*count].id));
    printf("Digite o nome: ");
    scanf("%s", registros[*count].nome);
    printf("Digite a idade: ");
    scanf("%d", &(registros[*count].idade));
    
    (*count)++;
}

void ler(struct Registro* registros, int count) {
    for (int i = 0; i < count; i++) {
        printf("ID: %d\n", registros[i].id);
        printf("Nome: %s\n", registros[i].nome);
        printf("Idade: %d\n", registros[i].idade);
        printf("----------------\n");
    }
}

void atualizar(struct Registro* registros, int count) {
    int id;
    printf("Digite o ID do registro a ser atualizado: ");
    scanf("%d", &id);
    
    for (int i = 0; i < count; i++) {
        if (registros[i].id == id) {
            printf("Digite o novo nome: ");
            scanf("%s", registros[i].nome);
            printf("Digite a nova idade: ");
            scanf("%d", &(registros[i].idade));
            return;
        }
    }
    
    printf("Registro não encontrado.\n");
}

void excluir(struct Registro* registros, int* count) {
    int id;
    printf("Digite o ID do registro a ser excluído: ");
    scanf("%d", &id);
    
    for (int i = 0; i < *count; i++) {
        if (registros[i].id == id) {
            for (int j = i; j < *count - 1; j++) {
                registros[j] = registros[j+1];
            }
            (*count)--;
            printf("Registro excluído.\n");
            return;
        }
    }
    
    printf("Registro não encontrado.\n");
}

int main() {
    struct Registro registros[100];
    int count = 0;
    int opcao;
    
    do {
        printf("----- CRUD -----\n");
        printf("1. Criar\n");
        printf("2. Ler\n");
        printf("3. Atualizar\n");
        printf("4. Excluir\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                criar(registros, &count);
                break;
            case 2:
                ler(registros, count);
                break;
            case 3:
                atualizar(registros, count);
                break;
            case 4:
                excluir(registros, &count);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }
        
        printf("\n");
    } while (opcao != 0);
    
    return 0;
}