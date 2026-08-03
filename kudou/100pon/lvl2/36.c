#include <stdio.h>
    //{3, 7, 0, 8, 4, 1, 9, 6, 5, 2}で初期化される大きさ10の整数型配列を宣言し、
    //整数値を2つ入力させ、
    //要素番号が入力値である2つの配列要素の値の積を計算して表示するプログラムを作成せよ。
    //入力値が配列の要素の範囲外であるかどうかのチェックは省略してよい。
    int main (void){
    int i = 0;
    int index1;
    int index2;
    int score [10] = {3, 7, 0, 8, 4, 1, 9, 6, 5, 2};
    printf("input index[1]:");
    scanf("%d", &index1);
    printf("input index[2]:");
    scanf("%d", &index2);
    printf("%d * %d = %d\n",score[index1] ,score[index2] ,score[index1]*score[index2] );
    
    
    
    return 0;
    }