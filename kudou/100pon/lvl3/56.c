#include <stdio.h>
//0〜65535の整数値を入力させ、入力値を16桁の2進数に変換して表示するプログラムを作成せよ。
int main(void){
    int num;
    int ans[16];
    int i;
    printf("input num:");
    scanf("%d",&num);
    for ( i = 0; i < 16; i++)
    {
        ans[i] = num % 2;
         num = num / 2;
    }
    for ( i = 15; i >= 0 ; i--)
    {
        printf("%d", ans[i] );
    }
    return 0;
}