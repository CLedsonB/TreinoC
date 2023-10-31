#include <stdio.h>

void linha(const char *str);

void main(void){
    linha("isso é um teste");
}
void linha(const char *str){
    while(*str){
        if(*str == ' ')printf("%c", '_');
        else printf("%c", *str);
        str++;
    }
}