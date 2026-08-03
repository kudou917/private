#include <stdio.h>
//整数値を入力させ、値が正であればpositive、
//負であればnegative、0であればzeroと表示するプログラムを作成せよ。
int main (void) {
    int num;
    printf("input number:");
    scanf("%d",&num);
    if ( num > 0 )
    {
    printf("positive\n");
    }
    else if ( num == 0 )
    {
    printf("zero\n");
    }
    else 
    {
    printf("negative\n");
    }
    return 0;
    }