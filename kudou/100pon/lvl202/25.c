/*
No. 25 -10未満?、-10以上0未満?、0以上?
整数値を入力させ、その値が-10未満ならrange 1、
-10以上0未満であればrange 2、0以上であればrange 3、と表示するプログラムを作成せよ。

【実行例、下線部は入力例】
$ ./knock25
input number: -15
range 1
$ ./knock25
input number: -10
range 2
$ ./knock25
input number: 0
range 3
$
*/

#include <stdio.h>

int main(void)
{
    int a;
    printf("input number: ");
    scanf("%d", &a);
    if (a<-10)
    {
        printf("range 1\n");
    }
    
    else if (-10 <= a && a < 0)
    {
        printf("range 2\n");
    }
    else if (0 <= a)
    {
        printf("range 3\n");

    }
    return 0;
}