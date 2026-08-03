# 組み込み講座メモ

昨日の復習
0b 2進数であることを宣言するために使われる記号。
0x 16進数であることを宣言するために使われる記号。  
10進数ではなく16進数を用いる理由は、2進数から16進数への変換が簡単だから。
たとえば、”0b0010110011111000”を16進数に変換する際、2進数を4bitずつ区切ってそれぞれを16進数に変換すれば簡単に変換可能です。上記の例では”0b　0010　1100　1111　1000”＝”0x2AF8”となる。
0010=2 1100=a 1111=F 1000=8

MCUは、さまざまなシリーズのソフトウェアおよび端子と互換性のあるArm®ベースの32ビットコアMCUで構成されています。同じ一連のルネサス周辺デバイスを共有することで、設計の拡張性やプラットフォームベースの製品開発の効率が高まります。
本MCUは、最大48MHzで動作する低消費電力で高性能なArm Cortex®-M4コアと、以下の各機能を最適な形で組み合わせています。

- 256KBのコードフラッシュメモリ
    コードフラッシュメモリ
- 32KBのSRAM
- セグメントLCDコントローラ（SLCDC）
- 静電容量式タッチセンシングユニット（CTSU）
- USB2.0フルスピードモジュール（USBFS）
- 14 ビットA/D コンバータ（ADC14）
- 12 ビットD/A コンバータ（DAC12）
- セキュリティ機能

23.レベル5
24.レベル5
25.レベル5
独立＾
27。レベル2
28。レベル5
29。レベル5
31レベル5
32レベル3
33レベル0.5
34レベル0.3
35レベル3
36レベル5
37レベル1
38レベル1
39レベル0
40レベル5
41レベル1
42レベル1
43レベル5
44レベル5
45レベル1
46レベル2
47レベル0
48レベル0
49レベル

 while (ループが終わる条件) {
       ループさせたい行動
    }

for (ループが終わる条件){
       ループさせたい行動
    }

do{
    実行したいこと
    } while (ループが終わる条件);

- forの条件式は、（1初期化2条件式3変化）を1行にまとめてかける。
- while,forと違ってdo-whileは最低でも一回行動する。

  //ポインター変数にアドレスを代入
    ptr_numtbl_0 = &numtbl[0];

    //ポインターを使ってアドレスと値を表示
    printf("ptr_numtbl_0 = &numtbl[%p] value=[%d]\n", ptr_numtbl_0, *ptr_numtbl_0);

＃if　0or1
＃else

＃endif

- これによってif~else前までのプロンプトかelse~endifまでのプロンプトかを切り替えられる。

- ポインタ　= アドレスを入れる変数

## 時間

0900-12:00,13:00-18:00

## 本日の学習項目

- マイコンのデータシートを読む作業
- Ｃ言語（while等の反復操作、アドレスの代入）
- x
- y
- z

## URL/Memo

[https://www.renesas.com/files/prod/docs/X009/X0096454/r01uh0887jj0110-ra4m1_1.pdf?response-content-disposition=inline%3B%20filename%3D%22r01uh0887jj0110-ra4m1.pdf%22&response-content-type=application%2Fpdf&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIA3WXFIBJWSDVTHJX3%2F20260422%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260422T010850Z&X-Amz-SignedHeaders=host&X-Amz-Expires=86700&X-Amz-Signature=6f4f7ddc0db162cd4182abfae049bf63abc74cbe7143d0e1e2f1f1e7cb13d380]

[https://chatgpt.com/share/69e872b7-61b8-83e8-877e-bc0067660b46]

[https://eetimes.itmedia.co.jp/ee/articles/2604/21/news117.html]

## 感想/質問/その他(振り返り)

Ｃ言語の勉強が加速して難しくなっている感覚がある。振り落とされないようにしていきたい。また自分のみで復習する場所はどこでやればいいのかおしえていただきたい。

## 残作業(あれば)
