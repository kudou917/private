#include <stdio.h>
//整数値を入力させ、その個数だけ*を表示するプログラムを作成せよ。
//入力値が0以下の値の場合は何も書かなくてよい。
int main (void){
    int num;
    int i;
    int total = 0;
    printf("input number:");
    scanf("%d",&num);
    for ( i = 0; i < num; i++)
        {
        printf("*");
        }
    return 0;
}
