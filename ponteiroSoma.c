#include <stdio.h>

void main(void){
    int x = 10;
    int *p1, *p2;
    
    
    //Atribuicao de ponteiro
    p1 = &x;
    p2 = p1;
    printf("%p - Endereco x \n", p2);
    printf("%p - Valor \n\n", *p2);
    
    printf("[Endereco] var = %x \n", &x);
    printf("[Endereco] ponteiro = %x \n", p1);
    printf("[Valor] var = %x \n", x);
    printf("[Valor] ponteiro = %x \n", *p1);
    
    
}