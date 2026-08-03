#include <stdio.h>
//整数値を入力させ、
//その値の回数だけHello World!を繰り返して表示するプログラムを作成せよ。
int main (void) {
    int i;
    int num;
    printf("input number:");
    scanf("%d" , &num);
    for ( i = 0; i < num; i++)
    {
    printf("Hello world!\n");
    }
    return 0;
}