#include <stdio.h>
// 「とんで」を9回「まわって」を3回繰り返した後「まわる」と表示して改行する、
// を3回繰り返すプログラムを作成せよ。「とんで」「まわって」と3行文の繰り返しは必ず繰り返し構文を使うこと。
int main(void)
{
    int i;
    int a;
    for (a = 0; a < 3; a++)
    {
        for (i = 0; i < 9; i++)
        {
            printf("とんで");
        }
        for (i = 0; i < 3; i++)
        {
            printf("まわって");
        }
        printf("まわる\n");
    }
    return 0;
}