#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main( ) {
	setlocale(LC_ALL, "Portuguese");
	int x, lim, i=1;
	char opc;
	
	printf("\n CLedsonB - 2023\n\n");
	printf("\t\t***TABUADA***\n\n");
	printf(" --Digite um número para a tabuada\n");
	printf(" --E um número para marcar o limite!");
	
	do{
	    printf("\n\n\tDigite um número: ");
    	scanf("%d", &x);
    	fflush(stdin);
	
    	printf("\n\tDigite o valor limite : ");
	    scanf("%d", &lim);
	    fflush(stdin);
	    
    	system("clear");
    	printf("  \t\t TABUADA DO %d\n\n", x);
    	for(int i=1;i<=lim;i++) {
	    	printf("\n\t%2d * %2d = %2d", x, i, x * i );
    	}
    	printf("\n\n  Considere as opções abaixo \n  e digite uma letra para a pergunta...\n");
    	printf("\n  [C] - Continuar\n");
    	printf("  [S] - Sair");
	    printf("\n\n  Deseja fazer outra tabuada? ");
    	scanf(" %c", &opc);
    	fflush(stdin);
    	system("clear");
	}while(tolower(opc) != 's');
	printf("\n\n");
}