#include <stdio.h>
//整数値を入力させ、
//0から入力値を超えない値まで2ずつ増やして表示するプログラムを作成せよ。
int main (void) {
    int i;
    int num;
    printf("input number:");
    scanf("%d" , &num);
    for ( i = 0; i <= num / 2 ; i++ )
    {
    printf("%d\n", i * 2 );
    }
    return 0;
}