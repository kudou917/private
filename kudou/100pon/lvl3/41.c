#include <stdio.h>
    //整数値を入力させ、その値が一桁の自然数か
    //そうでないか判定するプログラムを作成せよ。
    int main (void){
        int a = 0;
        int b = 0;
    printf("input number:");
        scanf("%d", &a);
    if (10 > a && a > 0)
    {
        printf("%d is a single figure.\n",a);
    }
    else
    {
        printf("%d is not a single figure.\n",a);
    }
    return 0;
    }