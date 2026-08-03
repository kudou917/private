#include <stdio.h>
//{3, 7, 0, 8, 4, 1, 9, 6, 5, 2}で初期化される大きさ10の整数型配列を宣言し、
//整数値を2つ入力させ、要素番号が入力値である2つの配列要素の値の積を計算して
//表示するプログラムを作成せよ。
//入力値が配列の要素の範囲外であるかどうかのチェックは省略してよい。
int main (void){
    int array[10] = {3, 7, 0, 8, 4, 1, 9, 6, 5, 2};
    int one;
    int two;
    printf("input index[1]:");
    scanf("%d",&one);
    printf("input index[2]:");
    scanf("%d",&two);
    printf("%d * %d = %d", array[one] , array[two] ,array[one] * array[two]);
    return 0;
}
