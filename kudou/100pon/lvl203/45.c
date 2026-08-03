/*
No. 45 タクシー料金
初乗り料金が1700mまで610円、それ以降は313mごとに80円のタクシーがある。
このタクシーに乗った距離をm単位で入力し、料金を計算するプログラムを作成せよ。

【実行例、下線部は入力例】
$ ./knock45
距離 10000
金額 2770
$ ./knock45
距離 2013
金額 690
$ ./knock45
距離 2014
金額 770
$
313mごとの区間は1mでも進んでしまったら80円かかることに注意。
*/

#include <stdio.h>
int main(void)
{
    int a;
    int tax = 0;
    int con = 0;
    printf("input distance:");
    scanf("%d", &a);
    if (a <= 1700)
    {
        tax = 610;
    }
    else
    {
        con = (a - 1701) / 313 + 1;
        tax = 610 + 80 * con;
    }

    printf("tax:%d", tax);
    return 0;
}