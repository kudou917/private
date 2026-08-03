#include <stdio.h>
//整数値を入力させ、その値が-10未満ならrange 1、
//-10以上0未満であればrange 2、0以上であればrange 3、と表示するプログラムを作成せよ。
int main (void){
    int num;
    printf("input number:");
    scanf("%d",&num);
    if ( num < -10 )
    {
    printf("renge 1\n");
    }
    else if ( -10 <= num && num < 0 )
    {
    printf("renge 2\n");
    }
    else{
    printf("renge 3\n");
    }
    return 0;
}