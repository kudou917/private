/*
No. 23 -5以上10未満
整数値を入力させ、その値が-5以上10未満であればOK、そうでなければNGと表示するプログラムを作成せよ。

【実行例、下線部は入力例】
$ ./knock23
input number: 0
OK
$ ./knock23
input number: 10
NG
$
*/

#include <stdio.h>

int main(void)
{
    int a;
    printf("input number: ");
    scanf("%d", &a);
    if (-5 <= a && a < 10)
    {
        printf("OK\n");
    }
    else
    {
        printf("NG\n");
    }
    

    return 0;
}