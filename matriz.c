//gcc 7.4.0

#include  <stdio.h>
#include  <conio.h>

int main(void)
{
    int matriz[3][3], i,j;
    
    printf("\nDigite valores para matriz\n");
    
    for(i=0;i<3;i++)
    			for(j=0;j<3;j++)
    			{
    			    printf("[%d][%d] = ", i,j);
    			    scanf("%d", &matriz[i][j]);
    			}
    	
    	printf("\n\n---SAIDA DE DADOS---\n\n");
    	
    	for(i=0;i<3;i++)
    			for(j=0;j<3;j++)
    			    printf("\n[%d][%d] -> %d", i,j, matriz[i][j]);
    			    
    	getch();
    return 0;
}