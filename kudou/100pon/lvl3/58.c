#include <stdio.h>
// 0以上の整数値を5つ入力させ、それぞれの値に対して、次の形式でグラフを描くプログラムを作成せよ。
// 形式：左端に値を表示し、適切に空白を空けて":"を書く（:で揃えるためにタブ\tを使うとよい）。
// その後ろに値の数だけ*を描くが、5個おきに空白を１つ入れる。具体例は下記の実行例を参照すること。
int main(void)
{
    int i;
    int num[5];
    int a;
    for (i = 0; i < 5; i++)
    {
        printf("input number:");
        scanf("%d", &num[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d  \t:", num[i]);
        for (a = 0; a < num[i]; a++)
        {
            printf("*");
            if (a % 5 == 4)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}