#include <stdio.h>
//整数値を入力させ、
//その値を絶対値にして表示するプログラムを作成せよ。
//（できれば変数の値を絶対値に変えるようにせよ）
int main (void) {
    int num;
    printf("input number:");
    scanf("%d",&num);
    if ( num < 0 )
    {
    num = num * -1;
    }
    printf("absolute number is %d\n",num);
    return 0;
    }