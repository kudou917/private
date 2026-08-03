#include <stdio.h>
    //整数値を入力させ、その個数だけ*を、
    //5個おきに空白（スペース）を入れて表示するプログラムを作成せよ。
    //入力値が0以下の値の場合は何も書かなくてよい。
    int main (void){
    int i ;
    int total;
        printf("input number:");
        scanf("%d", &total);

   for ( i = 0; i < total; i++)
   {
        printf("*"); 
    if(i % 5 == 4)
    {    
        printf(" ");
    }
    
   }
   
    
    return 0;
    }