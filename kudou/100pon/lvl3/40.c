#include <stdio.h>
    //整数値を入力させ、その値が偶数ならばeven、
    //奇数ならばoddと表示するプログラムを作成せよ。
    int main (void){
        int a = 0;
        int b = 0;
    printf("input number:");
        scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d is even.\n",a);
    }
    else
    {
        printf("%d is odd.\n",a);
    }
    return 0;
    }