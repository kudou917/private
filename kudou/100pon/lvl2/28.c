#include <stdio.h>
    //整数値を入力させ、
    //その値の階乗を表示するプログラムを作成せよ。
    //ただし、0以下の値を入力した場合は1と表示する。
    int main (void){
        int num = 0;
        int total = 1;
        int i = 0;
    printf("input number:");
    scanf("%d", &num);

    if (num > 0){
       for ( i = 1; i <= num; i++)
       { total = total * i;
       }

       printf("factrial:%d\n", total);
    }

    else
    {
     printf("factrial:1\n");
    }
    
    
    
    

    return 0;
    }