#include <stdio.h>
// まず受験者数を入力させ、次に受験者数ごとに英語、数学、国語の点数をスペースで区切って入力させる
// （具体的な入力方法は下記のscanfの使い方の説明、および入力データの中身を見よ）。
// 入力が終了したら、英語、数学、国語の平均点、および各受験生の合計点を計算して表示するプログラムを作成せよ。
// 受験者数は100人までとする。なお、データの個数とデータはファイルからリダイレクトで入力させればよいので、
// 入力のためのメッセージは不要である（実行例を参照すること）。
void cal(int x[], int size)
{   int i;
    int total;
    int ave;
    for (i = 0; i < size; i++)
    {
        total = total + x[i];
    }
    ave = total / size;
    printf("%d\t",ave);
}
int main(void)
{
    int numData; // データの個数
    int eng[100];
    int math[100];
    int lang[100];
    int i; // カウンタ
    // データの個数を読み込む
    scanf("%d", &numData);

    for (i = 0; i < numData; i++)
    {
        scanf("%d %d %d", &eng[i], &math[i], &lang[i]);
    }
    printf("numData = %d\n", numData);
    printf("English:");
    cal(eng, numData);
    printf("Math:");
    cal(math, numData);
    printf("Japanese:");
    cal(lang, numData);
    printf("\n");

    for (i = 0; i < numData; i++)
    {
        printf("stu %d,total:%d\n", i, eng[i] + math[i] + lang[i]);
    }

    return 0;
}