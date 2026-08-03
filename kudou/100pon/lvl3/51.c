#include <stdio.h>
// 指定した金額を100円玉と10円玉と1円玉だけで、
// できるだけ少ない枚数で支払いたい。
//金額を入力するとそれぞれの枚数を計算して表示するプログラムを作成せよ。
int main(void)
{
    int money;
    printf("input money\n");
    scanf("%d", &money);
    
    printf("100yen:%d,10yen:%d,1yen:%d", money / 100,money % 100 / 10, money % 1000 % 10 );
    return 0;
}