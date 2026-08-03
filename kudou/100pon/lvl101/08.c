#include <stdio.h>
//整数値を入力させ、
//値が正であればpositiveと表示するプログラムを作成せよ。ただし0は正には含まない。
int main (void) {
    int num;
    printf("input number:");
    scanf("%d",&num);
    if ( num > 0 )
    {
    printf("positive\n");
    }
    return 0;
    }