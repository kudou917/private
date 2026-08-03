#include <stdio.h>
    //整数値を入力させ、
    //値が正であればpositiveと表示するプログラムを作成せよ。ただし0は正には含まない。
    int main(void){

     int a;

    printf("input number\n");

    
    scanf("%d", &a);
    
    if (a > 0) {
      printf("positive");
    }    
    return 0;
    }