#include <stdio.h>
    //整数値を入力させ、その値の回数だけHello World!を繰り返して表示するプログラムを作成せよ。
    int main (void){
    
    int a = 0;
    int b = 0;
    printf("input number\n");

    
    scanf("%d", &a);
    
        while (b <= a - 1)
        {
        printf("Hello world!\n");

        b = b + 1;
        }
    return 0;
    }