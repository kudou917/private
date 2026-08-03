#include <stdio.h>
// 九九の表を、2重の繰り返しを使って表示するプログラムを作成せよ。
// 2重の繰り返しを使わず単に表示するだけではダメ。値の間はタブ(\t)を使って間をあけること。
int main(void)
{
    int i;
    int count;
    for (count = 1; count < 10; count++)
    {
        for (i = 1; i < 10; i++)
        {
            if (i % 9 == 0)
            {
                printf("%d\n", count * i);
            }
            else
            {
                printf("%d\t", count * i);
            }
        }
    }
    return 0;
}