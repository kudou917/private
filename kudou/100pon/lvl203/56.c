/*
No. 56 2進数変換
0〜65535の整数値を入力させ、入力値を16桁の2進数に変換して表示するプログラムを作成せよ。

【実行例、下線部は入力例】
$ ./knock56
input number: 127
0000000001111111
$ ./knock56
input number: 10000
0010011100010000
$ ./knock56
input number: 65535
1111111111111111
$
ヒント：16桁分の2進数を記憶する配列を用意する。2で割った余り(0か1)を最初の桁の値とし、
2で割った値を新たな値とし、さらに2で割った余りを次の桁の値とする。
これを繰り返していけば1の桁から順に値が求まるので、表示するときは逆順に表示すればよい。
*/

#include <stdio.h>
int main(void)
{
    int i;
    int a[16];
    int num;
    printf("input number:");
    scanf("%d", &num);
    for (i = 0; i < 16; i++)
    {
        if (num % 2 == 0)
        {
            a[i] = 0;
        }
        else
        {
            a[i] = 1;
        }
        num = num / 2;
    }

    for (i = 15; i >= 0; i--)
    {
        printf("%d", a[i]);
    }

    return 0;
}