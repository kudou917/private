# pyxel早見表

分類    |   関数    |   役割
---|---|---
初期化  |    pyxel.init(w, h)    |  画面の幅・高さなどを指定してウィンドウを作成
実行    |   pyxel.run(update, draw) |   update→drawのゲームループを開始
描画    |   pyxel.cls(col)  |   画面を指定色で塗りつぶしてクリア
描画    |   pyxel.rect(x, y, w, h, col) |   塗りつぶした四角形を描く
描画    |   pyxel.text(x, y, s, col)    |   文字列を表示する
描画    |   pyxel.blt(x, y, img, u, v, w, h, colkey)    |   イメージバンクの絵を画面に貼りつける
描画    |   pyxel.bltm(x, y, tm, u, v, w, h)    |   タイルマップをまとめて描画
入力    |   pyxel.btn(key)  |   押されている間ずっとTrue
入力    |   pyxel.btnp(key) |   押された瞬間だけTrue
入力    |   pyxel.mouse_x / mouse_y |   マウスカーソルの座標を取得
音  |   pyxel.play(ch, snd) |   指定チャンネルでサウンドを再生
ファイル    |   pyxel.load("file.pyxres")   |   Pyxel Editorで作った素材ファイルを読み込む