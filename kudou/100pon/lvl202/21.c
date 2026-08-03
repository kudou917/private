/*
No. 21 5より大きく20より小さい
整数値を入力させ、その値が5よりも大きく、かつ、20よりも小さければOKと表示するプログラムを作成せよ。

【実行例、下線部は入力例】
$ ./knock21
input number: 10
OK
$ ./knock21
input number: 5
$
*/

#include <stdio.h>

int main(void)
{
    int a;
    printf("input number: ");
    scanf("%d", &a);
    if (5<a&&a<20)
    {   
    printf("OK\n");
    }

    return 0;
}