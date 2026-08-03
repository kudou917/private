#include <stdio.h>

int main(void)
{
    int max = 0;
    int min = 999;
    int numData;   // データの個数
    int data[100]; // データを格納する配列、100個分
    int i;         // カウンタ

    // データの個数を読み込む
    scanf("%d", &numData);

    // 本当は、ここでデータの個数をチェックする必要があるが省略

    // データの個数だけ繰り返してデータを読み込む
    for (i = 0; i < numData; i++)
    {
        scanf("%d", &data[i]);
    }
    for ( i = 0; i < numData; i++)
    {
        if ( data[i] > max)
        {
            max = data[i];
        }
        
        else if ( data[i] < min)
        {
            min = data[i];
        }
        
    }
    printf("min:%d,max:%d\n", min, max);
    return 0;
}