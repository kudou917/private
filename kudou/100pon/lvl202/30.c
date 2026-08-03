/*
No. 30 棒グラフ
整数値を入力させ、その個数だけ*を表示するプログラムを作成せよ。入力値が0以下の値の場合は何も書かなくてよい。

【実行例、下線部は入力例】
$ ./knock30
input number: 7
*******
$ ./knock30
input number: 13
*************
$
*を改行せず入力値回だけ繰り返して表示し、繰り返しが終わったら改行\nだけ表示すればよい。
*/

#include <stdio.h>

int main(void)
{
    int a;
    printf("input number: ");
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        printf("*");
    }
    printf("\n");
    return 0;
}