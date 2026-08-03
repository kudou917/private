#include <stdio.h>
    //整数値を3つ入力させ、
    //それらの値が小さい順（等しくてもよい）に並んでいるか判定し、
    //小さい順に並んでいる場合はOK、
    //そうなっていない場合はNGと表示するプログラムを作成せよ。
    int main (void){
    int score[3] ={0};
    int i;
        for ( i = 0; i < 3; i++)
        {
        printf("input number:");
        scanf("%d", &score[i]);
        }
   
    if ( score[1] > score[0]  && score[2] > score[1] && score[2] > score[0] )
    {
        printf("OK\n");
    }
    else
    {
        printf("NG\n");
    }
    return 0;
    }