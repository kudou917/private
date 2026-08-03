#include <stdio.h>
   //整数値を入力させ、値が正であればpositive、
   //負であればnegative、0であればzeroと表示するプログラムを作成せよ。
    int main(void){

     int a;

    printf("input number\n");

    
    scanf("%d", &a);
    
    if (a > 0) {
      printf("%d",a);
    }    

    else if (a < 0) {
      printf("%d",a * -1);
    }    

    else  {
      printf("%d",a);
    }    
    return 0;
    }