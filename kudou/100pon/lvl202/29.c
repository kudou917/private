/*
No. 29 5つの合計
整数値を5回入力させ、それらの値の合計を表示するプログラムを繰り返しを使って作成せよ。

【実行例、下線部は入力例】
$ ./knock29
input number: 11
input number: 22
input number: 33
input number: 44
input number: 55
sum = 165
$
*/

#include <stdio.h>

int main(void)
{
    int a;
    int total = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("input number: ");
        scanf("%d", &a);
        total = total + a;
    }
    printf("sum = %d", total);
    return 0;
}