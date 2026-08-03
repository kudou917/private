#include <stdio.h>
//整数値を入力させ、値が0ならzero、
//0でなければnot zeroと表示するプログラムを作成せよ。
int main (void) {
    int num;
    printf("input number:");
    scanf("%d",&num);
    if ( num == 0 ){
    printf("zero\n");
    }
    else{
    printf("not\n");
    }
    return 0;
    }