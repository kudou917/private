#include <stdio.h>
// 最初に2以上の整数値を入力し、次の規則で計算し、計算回数と計算結果を表示し、
// 計算結果が1になるまで繰り返すプログラムを作成せよ。
// 規則：ある値が偶数ならその値を1/2にする。奇数ならその値を3倍して1を足す。

int main(void)
{
    int num;
    int i = 1;
    printf("input number:");
    scanf("%d", &num);
    while(num != 1)
    {
        if (num % 2 == 0)
        {
            num = num / 2;
            printf("%d:%d\n", i++, num);
        }
        else
        {
            num = num * 3 + 1;
            printf("%d:%d\n", i++, num);
        }
    }
    return 0;
}