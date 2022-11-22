#include<stdio.h>

int main()
{
    int rep;
    
    printf("Quantas repetições deseja fazer?\n->");
    scanf("%d", &rep);
    int fi[rep], i, tot_f=0;
    float sal[rep], tot_sal=0;
    
    for(i=1;i<=rep;i++) 
    {
    printf("\nSalario _%d_\n->", i);
    scanf("%f", &sal[i]);
    printf("Numero de filhos _%d_\n->", i);
    scanf("%d", &fi[i]);
    }
    
    for(i=1;i<=rep;i++)
    {
        tot_sal += sal[i];
        tot_f += fi[i];
    }
    
    printf("\nMedia dos salarios: %.2f", tot_sal / rep);
    printf("\nMedia do filhos: %d", tot_f / rep);

    return 0;
}