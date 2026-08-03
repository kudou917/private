#include <stdio.h>
    //整数値を入力させ、1からその値までの総和を計算して表示するプログラムを作成せよ。
    //ただし、0以下の値を入力した場合は0と表示する。
    int main (void){
        int i = 0;
        int a = 0;
    printf("input number:");
    scanf("%d", &a);
        if (a >=0){
            printf("sum:%d\n",a* (a + 1) / 2);
            }
        else{
        printf("sum:0\n");
        }
    
    return 0;
    }