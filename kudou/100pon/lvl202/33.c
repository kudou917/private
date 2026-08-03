/*
No. 33 入力値抜き
整数値を入力させ、1から9まで、入力値以外を表示するプログラムを作成せよ。

【実行例、下線部は入力例】
$ ./knock33
input number: 7
1
2
3
4
5
6
8
9
$
*/

#include <stdio.h>

int main(void)
{
    int a;
    printf("input number: ");
    scanf("%d", &a);
    for (int i = 1; i <= 9; i++)
    {
        if (i == a)
        {
        }
        else
        {
            printf("%d\n", i);
        }
    }
    printf("\n");
    return 0;
}