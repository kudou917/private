#include <stdio.h>
//整数値を入力させ、その値が-10以上0未満、
//または、10以上であればOK、そうでなければNGと表示するプログラムを作成せよ。
int main (void){
    int num;
    printf("input number:");
    scanf("%d",&num);
    if (-10 <= num && num < 0 || 10 <= num)
    {
    printf("OK\n");
    }
    else{
    printf("NG\n");
    }
    return 0;
}