#include <stdio.h>
//整数値を2つ入力させ、それらの値の和、差、積、商と余りを求めるプログラムを作成せよ。
//なお、差と商は1つ目の値から2つ目の値を引いた、
//あるいは割った結果とする。余りは無い場合も0と表示するのでよい。
int main (void) {
    int i;
    int num[2] = {0};
    for ( i = 0; i < 2; i++)
    {
    printf("input number:");
    scanf("%d",&num[i]);
    }
    printf("和： %d\n", num[0] + num[1]);
    printf("差： %d\n", num[0] - num[1] );
    printf("積： %d\n", num[0] * num[1] );
    printf("商： %d, ", num[0] / num[1] );
    printf("余り： %d\n", num[0] % num[1] );
    return 0;
}