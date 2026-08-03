/*
No. 32 5の倍数でbar
1から20まで順に表示するが、5の倍数の場合は数字の代わりにbarと表示するプログラムを作成せよ。

【実行例】
$ ./knock32
1
2
3
4
bar
6
（途中、7から18まで省略）
19
bar
$
*/

#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 20; i++)
    {
        if (i % 5 != 0)
        {
            printf("%d\n", i);
        }
        else if (i % 5 == 0)
        {
            printf("bar\n");
        }
    }
    printf("\n");
    return 0;
}