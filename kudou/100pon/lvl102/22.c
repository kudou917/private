#include <stdio.h>
//整数値を入力させ、その値が-10以下、
//または、10以上であればOKと表示するプログラムを作成せよ。
int main (void){
    int num;
    printf("input number:");
    scanf("%d",&num);
    if (-10 >= num || num >= 10)
    {
    printf("OK\n");
    }
    return 0;
}