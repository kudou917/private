#include <stdio.h>
   //整数値を入力させ、値が正であればpositive、
   //負であればnegative、0であればzeroと表示するプログラムを作成せよ。
    int main(void){

     int a;

    printf("input number\n");

    
    scanf("%d", &a);
    
    if (a > 0) {
      printf("positive");
    }    

    else if (a < 0) {
      printf("negative");
    }    

    else  {
      printf("zero");
    }    
    return 0;
    }