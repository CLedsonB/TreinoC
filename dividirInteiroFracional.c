#include <stdio.h>

int main( )
{
	float x;
	
	printf("\tPrograma 001\n");
	printf("\n\tObjetivo\n");
	printf("\t  _______________________\n");
	printf("\t | Separar parte inteira |\n");
	printf("\t | da parte fracionaria  |\n");
	printf("\t |_______________________|\n");
	
	printf("\n  Digite um N° real ( ex : 0.00 ) : ");
	scanf("%f", &x);
	
	printf("\n  Parte Inteira : %d \n  Parte Fracionaria : %f \n", (int) x, x - ((int) x));
}