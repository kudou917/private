/*
No. 22 -10以下または10以上
整数値を入力させ、その値が-10以下、または、10以上であればOKと表示するプログラムを作成せよ。

【実行例、下線部は入力例】
$ ./knock22
input number: 10
OK
$ ./knock22
input number: 0
$
*/

#include <stdio.h>

int main(void)
{
    int a;
    printf("input number: ");
    scanf("%d", &a);
    if (a <= -10 || 10 <= a)
    {
        printf("OK\n");
    }

    return 0;
}