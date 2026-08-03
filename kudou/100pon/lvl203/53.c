/*
No. 53 素因数分解
自然数の入力値を素因数分解して結果を表示するプログラムを作成せよ。

【実行例、下線部は入力例】
$ ./knock53
input number: 840
2 2 2 3 5 7
$
まず2で割り切れる間は割っていき、2で割り切れなくなったら3で、と、割る数を1ずつ大きくしながら繰り返す。
*/

#include <stdio.h>
int main(void)
{
    int a;
    int i = 2;
    printf("input number:");
    scanf("%d", &a);
    while (i < a)
    {
        if (a % i == 0)
        {
            a = a / i;
            printf("%d ", i);
        }
        else if (a % i != 0)
        {
            i = i + 1;
        }
    }
    printf("%d",a);
    return 0;
}