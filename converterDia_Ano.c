// Dias em meses e ano

#include<stdio.h>
#include<conio.h>

int main()
{
	int dias, dia, mes, ano;
	char opc = 's';
	
	while(opc=='s') {
		
		dias = dia = mes = ano = 0;
		clrscr();
		
		printf("\n\tDigite o numero de dias : ");
		scanf("%d", &dias);
		fflush(stdin);
		
		dia = dias;
		
		while(dia>=365) {
			ano++;
			dia -= 365;
		}
		while(dia>=30){
			mes++;
			dia -= 30;
		}
		clrscr();
		
		printf("\n\t%d Dias = %d Ano, %d Mes, %d Dia\n\n", dias, ano, mes, dia);
		
	printf("\tDeseja recalcular? ");
	scanf("%c", &opc);
	fflush(stdin);
	}
	
	getch();
}