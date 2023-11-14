#include <stdio.h>
#include <stdlib.h>

// Função para criptografar a string
void criptografar(char *str, int deslocamento) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = ((str[i] - 'A' + deslocamento) % 26) + 'A';
        }
        i++;
    }
}

// Função para descriptografar a string
void descriptografar(char *str, int deslocamento) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = ((str[i] - 'A' - deslocamento + 26) % 26) + 'A';
        }
        i++;
    }
}

int main() {
    int opcao, deslocamento;
    char str[100];

    printf("Menu:\n");
    printf("1. Criptografar\n");
    printf("2. Descriptografar\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    // Limpar a tela
    system("clear");

    printf("Digite uma string: ");
    scanf("%s", str);

    // Limpar a tela novamente
    system("clear");

    if (opcao == 1) {
        // Criptografar
        deslocamento = rand() % 26 + 1;
        criptografar(str, deslocamento);
        printf("String criptografada: %s\n", str);
    } else if (opcao == 2) {
        // Descriptografar
        printf("Digite o deslocamento: ");
        scanf("%d", &deslocamento);
        descriptografar(str, deslocamento);
        printf("String descriptografada: %s\n", str);
    } else {
        printf("Opcao invalida!\n");
    }

    return 0;
}