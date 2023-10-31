// implementacao da funcao xor

#include <stdio.h>

int xor(int a, int b);

void main(void){
    
    printf(" Operador lógico XOR (exclusivo)\n\n");
    printf(" 1 e 0 = %d \n", xor(1,0));
    printf(" 0 e 1 = %d \n", xor(0,1));
    printf(" 1 e 1 = %d \n", xor(1,1));
    printf(" 0 e 0 = %d \n", xor(0,0));
    }
    
int xor(int a, int b){
    return (a || b) && !(a && b);
}