#include <stdio.h>

int main(void){

    char *figure1;
    char **figure2;

    char buf1[50]="ABCDE";
    char buf2[50]="12345";

    //buf1のポインタを代入
    figure1=buf1;
    //ポインタfigure1のポインタをfigure2に代入
    figure2=&figure1;
    //ポインタのポインタfigure2にbuf2の先頭アドレスを格納
    *figure2=buf2;

    printf("%s\n",figure1);

    printf("buf1 adress\t=[%p]\n",buf1);
    printf("buf2 adress\t=[%p]\n",buf2);

    printf("figure1 \t=[%p]\n",figure1);

    return 0;
}