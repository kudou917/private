/*
No. 27 1からnまでの和
整数値を入力させ、
1からその値までの総和を計算して表示するプログラムを作成せよ。ただし、0以下の値を入力した場合は0と表示する。

【実行例、下線部は入力例】
$ ./knock27
input number: 10
sum = 55
$ ./knock27
input number: -2
sum = 0
$
*/

#include <stdio.h>

int main(void)
{
    int a;
    int total = 0;
    printf("input number: ");
    scanf("%d", &a);
    for (int i = 0; i <= a; i++)
    {
        total = total + i;
    }
    printf("sum = %d", total);
    return 0;
}