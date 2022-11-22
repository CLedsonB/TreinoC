#include<stdio.h>
#include<conio.h>
void main()
{
    	int r,p;
    float a;
    clrscr();
    printf("Enter with a float value\n->");
    	scanf("%f",&a);
    r=a;
    	printf("\nTotal Int:%d\n",r);
    	p=(a-r)*100;
    	printf("\nTotal Float:%d\n",p);
    	getch();
}