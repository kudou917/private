#include <stdio.h>

    //整数値を2つ入力させ、それらの値の和、差、積、商と余りを求めるプログラムを作成せよ。
    //なお、差と商は1つ目の値から2つ目の値を引いた、あるいは割った結果とする。
    //余りは無い場合も0と表示するのでよい。

    int a = 0;
    int b = 0;
    int main(void){
    printf("1つめの整数を入力してね\n");

    scanf("%d",&a);

    printf("2つめの整数を入力してね\n");

    scanf("%d",&b);
    
    printf("結果はこちら！\n");
    printf("和:%d\n",a + b);
    printf("差:%d\n",a - b);
    printf("積:%d\n",a * b);
    printf("商:%d,",a / b);
    printf("商の余り:%d\n",a % b);

    return 0;
    }