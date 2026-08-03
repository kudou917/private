#include <stdio.h>
    //整数値を入力させ、その値が-10未満ならrange 1、
    //-10以上0未満であればrange 2、
    //0以上であればrange 3、と表示するプログラムを作成せよ。
    int main (void){
        int a = 0;
    printf("input number:");
      scanf("%d", &a);
      
      switch (a) {
        case 1:
            printf("one\n");
            break;
        case 2:
            printf("two\n");
            break;
        case 3:
            printf("three\n");
            break;
        default:
            printf("others\n");
            break;
    }

    return 0;
    }