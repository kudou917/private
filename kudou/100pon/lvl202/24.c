/*
No. 24 -10以上0未満、または、10以上
整数値を入力させ、その値が-10以上0未満、または、10以上であればOK、
そうでなければNGと表示するプログラムを作成せよ。

【実行例、下線部は入力例】
$ ./knock24
input number: -5
OK
$ ./knock24
input number: 10
OK
$ ./knock24
input number: 5
NG
$
*/

#include <stdio.h>

int main(void)
{
    int a;
    printf("input number: ");
    scanf("%d", &a);
    if (-10 <= a && a < 0)
    {
        printf("OK\n");
    }
    else if (10 <= a)
    {
        printf("OK\n");
    }

    else
    {
        printf("NG\n");
    }

    return 0;
}