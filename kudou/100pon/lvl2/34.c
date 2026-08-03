#include <stdio.h>
    //整数値を入力させ、1から9まで、入力値以外を表示するプログラムを作成せよ。
    int main (void){
    int i ;
    int total;
    printf("input number:");
    scanf("%d", &total);

   for ( i = 1; i < 10; i++)
   {
    if(i == total)
    {    
    }
    else if(i == total +1)
    { 
    }
    else
    {
        printf("%d\n",i); 
    }
    
   }
   
    
    return 0;
    }