/*
No. 57 テスト集計
まず受験者数を入力させ、次に受験者数ごとに英語、数学、国語の点数をスペースで区切って入力させる
（具体的な入力方法は下記のscanfの使い方の説明、および入力データの中身を見よ）。
入力が終了したら、英語、数学、国語の平均点、および各受験生の合計点を計算して表示するプログラムを作成せよ。
受験者数は100人までとする。なお、データの個数とデータはファイルからリダイレクトで入力させればよいので、入力のためのメッセージは不要である（実行例を参照すること）。

【実行例、データファイルは下のリンクから取得せよ】
$ ./knock57 < examSmall.data
平均点 英語:46, 数学:51, 国語:55
個人合計点
0: 141
1: 114
（途中省略）
8: 96
9: 188
$ ./knock57 < examMiddle.data
平均点 英語:55, 数学:53, 国語:54
個人合計点
0: 136
1: 64
（途中省略）
48: 265
49: 167
$ ./knock57 < examLarge.data
平均点 英語:52, 数学:51, 国語:51
個人合計点
0: 151
1: 241
（途中省略）
98: 107
99: 178
$
複数の値をスペースで区切って一度に入力させるには、次のようにscnaf関数の書式指定文字列を使う：

scanf("%d %d %d", &eng, &math, &lang);

入力データはこちら（右クリックで「リンク先をダウンロード」）
examSmall.data
examMiddle.data
examLarge.data
*/

#include <stdio.h>

int main()
{
    int et = 0;
    int mt = 0;
    int lt = 0;
    int eng[100];
    int math[100];
    int lang[100];
    int numData; // データの個数
    int i;       // カウンタ

    // データの個数を読み込む
    scanf("%d", &numData);

    
    // データの個数だけ繰り返してデータを読み込む
    for (i = 0; i < numData; i++)
    {
        scanf("%d %d %d", &eng[i], &math[i], &lang[i]);
    }

    // 本当は、ここでデータの個数をチェックする必要があるが省略

    for (i = 0; i < numData; i++)
    {
        et = et + eng[i];
        mt = mt + math[i];
        lt = lt + lang[i];
    }
    printf("average eng:%d, math:%d, lang:%d\n", et / numData, mt / numData, lt / numData);

    // おまけ：表示してちゃんと読み込まれたことを確認しておく
    printf("numData = %d\n", numData);
    for (i = 0; i < numData; i++)
    {
        printf("total:%d\n", eng[i] + math[i] + lang[i]);
    }

    return 0;
}