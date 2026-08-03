/*
No. 26 switch-case
整数値を入力させ、その値が1ならone、
2ならtwo、3ならthree、それ以外ならothersと表示するプログラムをswicth-case文を使って作成せよ。

【実行例、下線部は入力例】
$ ./knock26
input number: 1
one
$ ./knock26
input number: 2
two
$ ./knock26
input number: 3
three
$ ./knock26
input number: 0
others
$
*/

#include <stdio.h>

int main(void)
{
    int a;
    printf("input number: ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("one");
        break;

    case 2:
        printf("two");
        break;
    case 3:
        printf("three");
        break;

    default:
        printf("others");
        break;
    }
    return 0;
}