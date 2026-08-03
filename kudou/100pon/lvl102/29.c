#include <stdio.h>
//整数値を5回入力させ、
//それらの値の合計を表示するプログラムを繰り返しを使って作成せよ。
int main (void){
    int num[5];
    int i;
    int total = 0;
    for ( i = 0; i < 5; i++)
    {
    printf("input number:");
    scanf("%d",&num[i]);
    }
    for ( i = 0; i < 5; i++)
    {
    total = total + num[i] ;
    } 
    printf("sum = %d\n", total);
    return 0;
}
