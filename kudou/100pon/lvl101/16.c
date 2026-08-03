#include <stdio.h>
//整数値を入力させ、
//入力値が0でなければ再度入力させ、0であれば終了するプログラムを作成せよ。
int main (void) {
    int i;
    int num;
   do
   {
    printf("input number:");
    scanf("%d" , &num);
   } while (num != 0);
   
    return 0;
}