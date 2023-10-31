#include <stdio.h>
#include <conio.h>

int main( ) {
	float num1, num2, resultado;
	char operador;
	
	printf("\t***** OPERADORES DISPONIVEIS *****");
	printf("\n\t a -> Adicao");
	printf("\n\t s -> Subtracao");
	printf("\n\t m -> Multiplicacao");
	printf("\n\t d -> Divisao");
	printf("\n\t p -> potencia");
	printf("\n\t r -> raiz");
	
	printf("\n\n\tDigite um numero  :\n\t->> ");
	scanf("%f", &num1);
	fflush(stdin);
	
	printf("\tDigite um dos operadores :\n\t->> ");
	operador = getchar();
	fflush(stdin);
	
	printf("\tDigite um numero  :\n\t->> ");
	scanf("%f", &num2);
	fflush(stdin);
	
	switch(operador)
	{
		case 'A':
		case 'a':
			resultado = num1 + num2;
			operador = '+';
			break;
		
		case 'D':
		case 'd':
			resultado = num1 / num2;
			operador = '//';
			break;
		
		case 'M':
		case 'm':
			resultado = num1 * num2;
			operador = '*';
			break;
		
		case 'P':
		case 'p':
//		resultado = num1 ** num2; break;
		
		case 'R':
		case 'r':
	//	resultado = num1 ** 1/num2; break;
		
		case 'S':
		case 's':
			resultado = num1 - num2;
			operador = '-';
			break;
		
		default:
			printf("\tOperador Invalido");
			return printf("\tERROR 02");
	}
	return printf("\n\t%.3f %c %.3f = %.3f", num1, operador, num2, resultado);
}