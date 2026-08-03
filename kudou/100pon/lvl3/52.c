#include <stdio.h>
//西暦を入力したらその年が閏（うるう）年かどうかを判定するプログラムを作成せよ。
//なお、4で割り切れる年のうち、100で割り切れないか、400で割り切れる年は閏年である。
int main(void){
    int year;
    printf("input year\n");
    scanf("%d", &year);
    if ( year % 4 == 0 && year % 100 != 0)
    {
        printf("%d is leap",year);
    }
    else if ( year % 4 == 0 && year % 400 == 0)
    {
        printf("%d is leap",year);
    }
    else
    {
        printf("%d is not leap",year);
    }
    return 0;
}