#include <stdio.h>

int main()
{
	char texto[30];
	
	printf(" Digite uma frase impactante: ");
	scanf("%30[^\n]s", texto);
	
	printf(" Frase inserida : %s", texto);
}