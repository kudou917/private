#include <stdio.h>
//要素数10の整数型の配列を宣言し、整数値を入力させ、
//すべての配列の要素を入力値として、すべての要素の値を表示するプログラムを作成せよ。
int main (void) {
    int i;
    int ans;
    int num[10];
    printf("input number:");
    scanf("%d" , &ans);
    for ( i = 0; i < 10; i++)
    {
    printf("%d\n",  num[i] = ans );
    }
    return 0;
}