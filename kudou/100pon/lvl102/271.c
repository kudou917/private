#include <stdio.h>
//整数値を入力させ、1からその値までの総和を計算して表示するプログラムを作成せよ。
//ただし、0以下の値を入力した場合は0と表示する。
int main (void){
    int num;
    int i;
    printf("input number:");
    scanf("%d",&num);
    printf("sum = %d\n", num * num / 2 + num / 2);
    return 0;
}
