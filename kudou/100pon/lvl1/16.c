#include <stdio.h>
    //整数値を入力させ、
    //0から入力値まで数を1ずつ増やして表示するプログラムを作成せよ。
    int main (void){
    
    int a = 0;
    do {
    printf("input number\n");
    scanf("%d", &a);
    }while (a != 0);
    
    return 0;
    }