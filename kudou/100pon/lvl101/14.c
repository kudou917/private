#include <stdio.h>
//整数値を入力させ、0から入力値まで数を1ずつ増やして表示するプログラムを作成せよ。
int main (void) {
    int i;
    int num;
    printf("input number:");
    scanf("%d" , &num);
    for ( i = num; i >= 0; i--)
    {
    printf("%d\n", i );
    }
    return 0;
}