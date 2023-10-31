#include <stdio.h>
#include <math.h>
#include <locale.h>

int main( ) {
    setlocale(LC_ALL,"Portuguese");
    float num1, num2, resultado;
    char operador;
    
    printf("\t***** OPERADORES DISPONÍVEIS *****");
    printf("\n\t a -> Adição");
    printf("\n\t s -> Subtração");
    printf("\n\t m -> Multiplicação");
    printf("\n\t d -> Divisão");
    printf("\n\t p -> potencia");
    printf("\n\t r -> raiz");
    
    printf("\n\n\tDigite um número  :\n\t->> ");
    scanf("%f", &num1);
    fflush(stdin);
    
    printf("\tDigite um dos operadores :\n\t->> ");
    operador = getchar();
    fflush(stdin);
    
    printf("\tDigite um número  :\n\t->> ");
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
            operador = '/';
            break;
        
        case 'M':
        case 'm':
            resultado = num1 * num2;
            operador = '*';
            break;
        
        case 'P':
        case 'p':
            resultado = pow(num1, num2);
            operador = '^';
            break;
        
        case 'R':
        case 'r':
            resultado = pow(num1, 1/num2);
            operador = 'v';
            break;
        
        case 'S':
        case 's':
            resultado = num1 - num2;
            operador = '-';
            break;
        
        default:
            printf("\tOperador Invalido");
            return printf("\tERROR 02");
    }
    return printf("\n\t%.3f %c %.3f = %.3f\n", num1, operador, num2, resultado);
}