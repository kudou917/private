/*
No. 36 続・配列要素の参照
{3, 7, 0, 8, 4, 1, 9, 6, 5, 2}で初期化される大きさ10の整数型配列を宣言し、
整数値を2つ入力させ、要素番号が入力値である2つの配列要素の値の積を計算して表示するプログラムを作成せよ。
入力値が配列の要素の範囲外であるかどうかのチェックは省略してよい。

【実行例、下線部は入力例】
$ ./knock36
input index1: 3
input index2: 6
8 * 9 = 72
$
配列の初期化は

int array[10] = {3, 7, 0, 8, 4, 1, 9, 6, 5, 2};
のようにすればよい。
*/

#include <stdio.h>

int main(void)
{
    int array[10] = {3, 7, 0, 8, 4, 1, 9, 6, 5, 2};
    int a;
    int b;
    printf("input index:");
    scanf("%d", &a);
    printf("input index2:");
    scanf("%d", &b);
    printf("%d * %d = %d\n", array[a], array[b], array[a] * array[b]);
    return 0;
}