#include <stdio.h>
    //整数値を5回入力させ、
    //それらの値の合計を表示するプログラムを繰り返しを使って作成せよ。
     int main (void){
    int i ;
    int total = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    
    int score [5] = { a, b, c, d, e};
    for(i=0;i<5;i++){
        printf("input number:");
        scanf("%d", &score[i]);
    }

    for(i=0;i<5;i++){
        total = total + score[i];
    }
    printf("sum:%d\n", total );

    return 0;
    }