/*
No. 28 nの階乗
整数値を入力させ、その値の階乗を表示するプログラムを作成せよ。ただし、0以下の値を入力した場合は1と表示する。

【実行例、下線部は入力例】
$ ./knock28
input number: 10
factorial = 3628800
$ ./knock28
input number: -2
factorial = 1
$
*/

#include <stdio.h>

int main(void)
{
    int a;
    int total = 1;
    printf("input number: ");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        total = total * i;
    }
    printf("factorial = %d", total);
    return 0;
}