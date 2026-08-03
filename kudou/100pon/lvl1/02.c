#include <stdio.h>
    //12345を7で割った余りを表示するプログラムを作成せよ。
    int a = 12345;
    int b = 7;
    int main (void){
    printf("%d ÷ %d の余りは%d\n", a, b, a % b);
    return 0;
    }