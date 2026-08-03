#include <stdio.h>
//整数値を入力させ、その値の階乗を表示するプログラムを作成せよ。
//ただし、0以下の値を入力した場合は1と表示する。
int main (void){
    int num;
    int i;
    int total = 1;
    printf("input number:");
    scanf("%d",&num);
    for ( i = 1; i <= num; i++)
    {
        total = total * i;
    }
    
    printf("sum = %d\n", total);
    return 0;
}
