/*
No. 80 互いに素 ☆
2つの正の整数値を入力させ、互いに素であるか判定するプログラムを作成せよ。
なお、2つの正の整数が互いに素とは、1以外に共通公約数を持たない関係のことである。

【実行例、下線部は入力例】
$ ./knock80
2つの値をスペースで区切って入力: 23 24
互いに素
$ ./knock80
2つの値をスペースで区切って入力: 69 23
互いに素でない
$
ヒント：両方の値が割りきれる2より大きい整数が存在しないことを確認すればよい。
*/

#include <stdio.h>
void check(int,int);
int main(void)
{
    int a;
    int b;
    int count = 0;
    int i;
    printf("input number:");
    scanf("%d %d", a, b);
    check(count,a);
    check(count,b);
    for (i = 0; i < count; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
          printf  
        }
    }
    return 0;
}

void check(int count, int s)
{
    if (count > s)
    {
        count = s;
    }
}