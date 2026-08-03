/*
No. 52 閏年
西暦を入力したらその年が閏（うるう）年かどうかを判定するプログラムを作成せよ。
なお、4で割り切れる年のうち、100で割り切れないか、400で割り切れる年は閏年である。

【実行例、下線部は入力例】
$ ./knock52
input year: 2015
2015年は閏年でない
$ ./knock52
input year: 2016
2016年は閏年である
$ ./knock52
input year: 2100
2100年は閏年でない
$ ./knock52
input year: 2000
2000年は閏年である
$
*/

#include <stdio.h>
int main(void)
{
    int a;
    printf("input year:");
    scanf("%d", &a);
    if ((a%4==0&&a%100!=0)||(a%4==0&&a%400==0))
    {
        printf("uruu\n");
    }    
    else
    {
        printf("not uruu\n");
    }
    
    return 0;
}