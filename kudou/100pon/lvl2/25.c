#include <stdio.h>
    //整数値を入力させ、その値が-10未満ならrange 1、
    //-10以上0未満であればrange 2、
    //0以上であればrange 3、と表示するプログラムを作成せよ。
    int main (void){
        int a = 0;
       printf("input number:");
        scanf("%d", &a);
       if (10 <= a) {
    printf("renge 3");    
     
    }
   
     else if (0 <= a && a < 10) {
     printf("renge 3"); 
   }   

    else if (-10 <= a && a < 0) {
     printf("renge 2"); 
   }   

    else  {
   printf("renge 1"); 
    }   
    return 0;
    }