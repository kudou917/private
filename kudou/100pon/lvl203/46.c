/*
No. 46 入場料
神山美術館の入場料金は、一人600円であるが、5人以上のグループなら一人550円、20人以上の団体なら一人500円である。
人数を入力し、入場料の合計を計算するプログラムを作成せよ。

【実行例、下線部は入力例】
$ ./knock46
人数 3
料金 1800
$ ./knock46
人数 7
料金 3850
$ ./knock46
人数 22
料金 11000
$
*/
#include <stdio.h>
int main(void)
{
    int a;
    int tax = 0;
    int con = 0;
    printf("input member:");
    scanf("%d", &a);
    if (a < 5)
    {
        tax = 600 * a;
    }
    else if (5 <= a && a < 20)
    {
        tax = 550 * a;
    }

    else
    {
        tax = 500 * a;
    }

    printf("tax:%d", tax);
    return 0;
}