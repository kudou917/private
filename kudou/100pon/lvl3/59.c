#include <stdio.h>
// 3x3行列の和を求めて表示するプログラムを作成せよ。行列の値は2次元配列で表現し、繰り返しを使って計算すること。
// 3x3行列とは縦3つ、横3つの9つの要素(値)をひとまとめにして扱うものである。
// 2つの3x3行列の和は次式のように、それぞれ同じ位置にある値を足したものとして計算できる。
int main(void)
{
    int mat[3][3];
    int rix[3][3];
    int i;

    printf("1st matrix:\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d %d %d", &mat[i][0], &mat[i][1], &mat[i][2]);
    }
    printf("2nd matrix:\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d %d %d", &rix[i][0], &rix[i][1], &rix[i][2]);
    }
    printf("total\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d\t%d\t%d\n", mat[i][0] + rix[i][0], mat[i][1] + rix[i][1], mat[i][2] + rix[i][2]);
    }
    return 0;
}