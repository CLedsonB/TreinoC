#include <stdio.h>
#include <conio.h>

struct pessoa
{
   char nome[50];
   short int idade;
   float peso;
} p2 = {"Luck",23,34.5};

int main()
{
	struct pessoa p1={"Ravi"};
	struct pessoa *p = &p1;
	clrscr();
	
	p1.idade = 34;
	p->peso = 54.3;
	
	printf("Nome : %s\n", p1.nome);
	printf("Idade : %hd\n", p1.idade);
    printf("Peso : %.2f\n\n", p1.peso);
	
	printf("Nome : %s\n", p2.nome);
	printf("Idade : %hd\n", p2.idade);
    printf("Peso : %.2f\n\n", p2.peso);
    
	return 0;
}