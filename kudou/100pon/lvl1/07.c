#include <stdio.h>
    //整数値を入力させ、値が0ならzero、0でなければnot zeroと表示するプログラムを作成せよ。
    int main(void){
     int a;
    printf("input number\n");
    scanf("%d", &a);
    switch (a){
    case 0:
      printf("zero");
        break;
    default:
        printf("not zero");
        break;
    }
    return 0;
    }