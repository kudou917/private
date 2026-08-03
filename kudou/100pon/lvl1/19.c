#include <stdio.h>
    //要素数5の整数型の配列を宣言し、
    //すべての配列に対して順に入力された整数値を代入し、すべての要素の値を表示するプログラムを作成せよ。
    int main (void){
    int i = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    
    int score [5] = { a, b, c, d, e};
    for(i=0;i<5;i++){
        printf("input number:");
        scanf("%d", &score[i]);
}
    
    for(i=0;i<5;i++){
    printf("%d\n", score[i]);
}
    
    
    return 0;
    }