#include <stdio.h>
//整数値を入力させ、その値が5よりも大きく、
//かつ、20よりも小さければOKと表示するプログラムを作成せよ。
int main (void){
    int num;
    printf("input number:");
    scanf("%d",&num);
    if (5 < num && num < 20)
    {
    printf("OK\n");
    }
    return 0;
}