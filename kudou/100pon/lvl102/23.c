#include <stdio.h>
//整数値を入力させ、
//その値が-5以上10未満であればOK、そうでなければNGと表示するプログラムを作成せよ。
int main (void){
    int num;
    printf("input number:");
    scanf("%d",&num);
    if (-5 <= num && num < 10)
    {
    printf("OK\n");
    }
    else{
    printf("NG\n");
    }
    return 0;
}