# はじめに

x,yの位置は左上から始まる

## pyxel早見表

- 初期化　pyxel.init(w, h)
画面の幅・高さなどを指定してウィンドウを作成
- 実行  pyxel.run(update, draw)
update→drawのゲームループを開始
- 描画 pyxel.cls(col)
画面を指定色で塗りつぶしてクリア
- 描画 pyxel.rect(x, y, w, h, col)
(x, y)を起点とし、幅w,高さhの短形を塗りつぶした四角形を描く
- 描画 pyxel.text(x, y, s, col)
文字列を表示する
- 描画 pyxel.blt(x座標, y座標, イメージバンク番号, イメージバンク上のx座標, イメージバンク上のy座標, 幅, 高さ, 透明色とする色の番号)
イメージバンクの絵を画面に貼りつける
- 描画 pyxel.bltm(x, y, tm, u, v, w, h)
タイルマップをまとめて描画
- 入力 pyxel.btn(key)
押されている間ずっとTrue
- 入力 pyxel.btnp(key)
押された瞬間だけTrue
- 入力 pyxel.mouse_x / mouse_y
マウスカーソルの座標を取得
- 音 pyxel.play(ch, snd)
指定チャンネルでサウンドを再生
- ファイル pyxel.load("file.pyxres")
Pyxel Editorで作った素材ファイルを読み込む
- col = pyxel.rndi(1, 15)
1~15の色を乱数で設定。左が最小値で右が最大値

## mathについて

math.sqrt(変数)
指定の変数の平方根を引数とする
(pyxelでも可能)

## randomについて

- r = random.random()
0.0以上1.0未満の数字を代入する
- r = random.randient(x, y)
x~yまでのいずれかの整数が出力
- r = random.randrange(x, y, z)
x~yまでのいずれかの整数がzおきに出力
- r = random.choice("x", "y"...)
文字列x,yのいずれかの入力

## その他

- (指定の関数).append(ついかしたいもの)
指定の関数に追加したい物を追加できる。
- abs(指定の数字)
数字を絶対値にすることが出来る。
- max()
指定の関数から最大値を引数として出す
- n = f'(変数名)'
（変数名）がそのままnに代入される。