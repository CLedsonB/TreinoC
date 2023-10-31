#include <stdio.h>

int main()
{
	char texto[30];
	
	printf(" Digite uma frase (fgets): ");
	fgets(texto,30, stdin);
	fflush(stdin);	
	
	printf(" Frase 1 : ");
	puts(texto);
}