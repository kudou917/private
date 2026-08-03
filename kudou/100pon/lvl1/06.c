#include <stdio.h>
    //整数値を入力させ、値が0ならzeroと表示するプログラムを作成せよ。
   
    int main(void){

     int a;

    printf("整数を入力してね！\n");

    
    scanf("%d", &a);
    
    switch (a)
    {
    case 0:
      printf("zero");
        break;
    
    default:
        break;
    }
    
    return 0;
    }