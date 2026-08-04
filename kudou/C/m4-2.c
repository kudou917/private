/*
probex4-2.(難易度：★★★)
実行結果の例を参考にして、長さ5の整数型の配列変数aに、
すべての成分に0から100の乱数の値を代入して表示し、以下の条件を満たす数値を表示するプログラムを作りなさい。

- 5つの整数の値は、main巻数の中でローカルな配列変数に代入すること。
- 配列の値の表示・値を2倍する処理にはそれぞれ専用の関数を用意すること。
- 前述の関数の引数は、すべて整数型のポインタを用いる事。
実行結果の例
発生した乱数：1 5 2 8 9
2倍した値：2 10 4 16 18
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void show(int*);
int up(int*);
int main(void)
{
    int n[5];
    int i;
    srand((unsigned)time(NULL));
    for (i = 0; i < 5; i++)
    {
        n[i] = rand() % 100;
        printf("%d ", n[i]);
    }
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        up(&n[i]);
        printf("%d ", n[i]);
    }
    return 0;
}

void show(int *a)
{
    printf("%d", *a);
}

int up(int *a)
{
    *a = *a * 2;
    show(&a);
}