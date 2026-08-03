#include <stdio.h>
    //2次方程式 ax^2 + bx + c = 0 （x^2はxの2乗の意味）の係数a, b, cを入力し、
    //2次方程式の解が2つの実数解か、重解か、
    //2つの虚数解かを判別するプログラムを作成せよ。
    int main (void){
    int score[3] ={0};
    int i;

    for ( i = 0; i < 3; i++ )
    {
    printf("input number:");
    scanf("%d", &score[i]);
    }
   
    if ( score[1] * score[1] - 4 *  score[0] * score[2] > 0 )
    {
    printf(" 2 real\n");
    }

    else if ( score[1] * score[1] - 4 *  score[0] * score[2] == 0 )
    {
    printf("multiple \n");
    }
    
    else
    {
    printf("2 imaginary\n");
    }
    return 0;
    }