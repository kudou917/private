#include <stdio.h>

void main(void){


char str[]= "hello";
char *p_str= "world";


    printf("str pointer \t = %p\n",str);

    printf("p_str pointer \t = %p\n",&p_str);

    printf("p_str value = \t%p\n",p_str);
    
}