// use #error Preprocessor with error

//#define USA 1
//#define IND 1

#include <stdio.h> 
#include <conio.h>

#if (!defined (USA) || !defined (IND))
   	#error ERROR: NO_CURRENCY rate is specified.
#endif

int main () 
{
    int amt;
	clrscr();

    amt = 1000;
    printf( "\n Amount : %d",  amt );

	getch();
	return 0;
}