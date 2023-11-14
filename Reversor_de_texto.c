#include<stdio.h>
#include <locale.h>
#include<string.h>

char* reverse(char entrada[200])
{
    int len, i, j;
    static char saida[200];
    len = 0;
    
    while(entrada[len]!='\0'){
        len++;
    }
    for(i=0,j=len-1; i<len; i++,j--){
        saida[j] = entrada[i];
    }
    saida[len] = '\0';
    
    return saida;
}

int main(void)
{
    setlocale(LC_ALL,"Portuguese");
    char texto[200], *conversao;
    printf(" Insira Texto\n->");
    fgets(texto,200,stdin);
    conversao = reverse(texto);
    printf(" Texto reverso\n%s\n\n", conversao);
    
    return 0;
}