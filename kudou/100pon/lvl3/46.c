#include <stdio.h>
#include <math.h>
// 神山美術館の入場料金は、一人600円であるが、5人以上のグループなら一人550円、
// 20人以上の団体なら一人500円である。人数を入力し、入場料の合計を計算するプログラムを作成せよ。
int main(void)
{
    int person;
    printf("input person\n");
    scanf("%d", &person);
    if (person < 5)
    {
        printf("tax is %d yen", person * 600);
    }
    else if (5 <= person && person < 20)
    {
        printf("tax is %d yen", person * 550);
    }

    else
    {
        printf("tax is %d yen", person * 500);
    }
    // 数学でつっかえるのが一番恥ずかしい
    return 0;
}