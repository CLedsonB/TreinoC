#include <stdio.h>
#include <string.h>

void encode(char texto[], char traducao[], int length);
void decode(char traducao[], char texto[], int length);

int main(void) {
    char texto[1000];
    char traducao[1000];
    
    printf("\t~~~Codificador~~~\n\n");
    printf("Insira o texto a ser codificado: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strlen(texto) - 1] = '\0';
    
    encode(texto, traducao, strlen(texto));
    
    printf("Traducao: %s\n", traducao);
    
    decode(traducao, texto, strlen(texto));
    
    printf("Decodificado: %s\n", texto);
    
    return 0;
}

void encode(char texto[], char traducao[], int length) {
    for (int i = 0; i < length; i++) {
        traducao[i] = ~texto[i];
    }
    traducao[length] = '\0';
}

void decode(char traducao[], char texto[], int length) {
    for (int i = 0; i < length; i++) {
        texto[i] = ~traducao[i];
    }
    texto[length] = '\0';
}
