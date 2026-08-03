#include <stdio.h>
//自然数の入力値を素因数分解して結果を表示するプログラムを作成せよ。
int main(void){
    int num;
    int i = 2; 
    printf("input num\n");
    scanf("%d", &num);
    while ( 1 < num )
    {
    if ( num % i == 0 )
    {
        num = num / i;
        printf("%d ",i);
    }
    else
    {
        i++;
    }
    
    }
    return 0;
}