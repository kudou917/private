#include <stdio.h>
    //整数値を入力させ、その値が5よりも大きく、
    //かつ、20よりも小さければOKと表示するプログラムを作成せよ。
    int main (void){
        int a = 0;
       printf("input number:");
        scanf("%d", &a);
       if (10 <= a) {
    printf("OK");    
     
    }
   
     else if (0 <= a && a < 10) {
     printf("NG"); 
   }   

    else if (-10 <= a && a < 0) {
     printf("OK"); 
   }   

    else  {
   printf("NG"); 
    }   
    return 0;
    }