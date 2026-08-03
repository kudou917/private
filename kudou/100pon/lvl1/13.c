#include <stdio.h>
    //整数値を入力させ、
    //0から入力値まで数を1ずつ増やして表示するプログラムを作成せよ。
    int main (void){
    
    int a = 0;
    int b = 0;
    printf("input number\n");

    
    scanf("%d", &a);
    
        while (b <= a )
        {
        printf("%d\n",b);

        b = b + 1;
        }
    return 0;
    }