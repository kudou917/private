# 組み込み講座メモ

~~~c
#include <stdio.h>

int main(int argc, char** argv){
    //  サイズSIZEの配列を用意する。
    int nums[] = { 1,2,3,4,5 };
    int *p = NULL;
    int i;
    p = &nums[4]; //  pにnumsのアドレスを入力
    //pの初期値を入力する。
    for( i = 0 ; i < 5; i++){
        printf("%d ",*p);
        p--;   //  p2のアドレスをインクリメント
    }
printf("\n");
    return 0;
}
~~~

## 時間

0900-12:00,13:00-18:00

## 本日の学習項目

- x
- y
- z

## URL/Memo

[python](http://eyesworks.aa0.netvolante.jp:3000/issues/887)
[ロードマップ](https://qiita.com/aokikenichi/items/644d03d403e3520e66ab)
[20年と短命だった「PowerPC」、旧Freescaleが粘るもArmに勝てず](https://edn.itmedia.co.jp/edn/articles/2607/27/news031.html)

## 感想/質問/その他(振り返り)

ポインタがやはりつかみきれない。明日もう少しやったらpythonの方にいく

## 残作業(あれば)
