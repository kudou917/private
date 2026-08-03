#include <stdio.h>
//{3, 7, 0, 8, 4, 1, 9, 6, 5, 2}で初期化される大きさ10の整数型配列を宣言し、
//整数値を入力させ、要素番号が入力値である配列要素の値を表示するプログラムを作成せよ。
//入力値が配列の要素の範囲外であるかどうかのチェックは省略してよい。
int main (void){
    int array[10] = {3, 7, 0, 8, 4, 1, 9, 6, 5, 2};
    int num;
    printf("input index:");
    scanf("%d",&num);
    printf("array[%d] = %d", num , array[num]);
    return 0;
}
