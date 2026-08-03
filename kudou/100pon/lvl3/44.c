#include <stdio.h>
// 換算したい金額（円単位）と1ドル何円かを整数値で入力すると、
// 入力した金額が何ドル何セントか計算して表示するプログラムを作成せよ。
// 1セントは1/100ドルである。結果は整数値でよい（1セント未満の端数切り捨て）。
int main(void)
{
    int Yen;
    int rate;
    int cent;
    printf("input Yen\n");
    scanf("%d", &Yen);
    printf("1dollor is?\n");
    scanf("%d", &rate);
    printf("%d yen is %d dollor %dcent", Yen, Yen / rate, Yen % rate * 100 / rate);
    // 数学でつっかえるのが一番恥ずかしい
    return 0;
}