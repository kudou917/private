#include <stdio.h>
//整数値を2つ入力させ、1つめの値を2つめの値で割った結果を表示し、
//続けてその結果に2つめの値を掛けた結果を表示するプログラムを作成せよ。
//計算はすべて整数型で行うこと（割り切れない場合は
//自動的に小数点以下が切り捨てられる）。
int main (void){
    int i;
    int num[2];
    for ( i = 0; i < 2; i++)
    {
    printf("input number:");
    scanf("%d",&num[i]);
    }
    printf("result:%d\n", num[0] / num[1] );
    printf("result:%d\n", num[0] / num[1] * num[1] );

    return 0;
}