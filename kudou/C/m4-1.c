/*
probex4-1.(難易度：★★)
以下のプログラムを実行すると結果は実行結果1のようになる。

probex4-1：main.c
#include <stdio.h>

int main(int argc, char** argv){
    //  サイズSIZEの配列を用意する。
    int nums[] = { 1,2,3,4,5 };
    int *p = NULL;
    int i;
    p = nums; //  pにnumsのアドレスを入力
    for( i = 0 ; i < 5; i++){
        printf("%d ",*p);
        p++;   //  p2のアドレスをインクリメント
    }
	printf("\n");
    return 0;
}
実行結果1
1 2 3 4 5
このプログラムの一部を改造し、次の実行結果2のようになるようにプログラムを変えなさい。
ただし、変えてよい部分は、ポインタ変数pへの操作の部分のみとする。

実行結果2
5 4 3 2 1
*/

#include <stdio.h>

int main(int argc, char** argv){
    //  サイズSIZEの配列を用意する。
    int nums[] = { 1,2,3,4,5 };
    int *p = NULL;
    int i;
    p = &nums[4]; //  pにnumsのアドレスを入力
    for( i = 0 ; i < 5; i++){
        printf("%d ",*p);
        p--;   //  p2のアドレスをインクリメント
    }
	printf("\n");
    return 0;
}