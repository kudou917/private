#include <stdio.h>
//整数値を入力させ、その入力値を3倍した計算結果を表示するプログラムを作成せよ。
int main (void) {
    int num;
    printf("input number:");
    scanf("%d",&num);
    printf("answer is %d\n", num * 3 );
    return 0;
}