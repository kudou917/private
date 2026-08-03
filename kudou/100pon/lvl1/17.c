#include <stdio.h>
    //要素数10の整数型の配列を宣言し、
    //i番目の要素の初期値をiとし、順に値を表示するプログラムを作成せよ。
    int main (void){
    int i = 0;
    int score [10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(i=0;i<10;i++){
    printf("%d\n", score[i]);
}
    
    
    
    return 0;
    }