import pyxel

pyxel.init(169, 120, title="画像を動かす", fps=10)  # 初期化fps=ヌルヌル加減
pyxel.images[0].load(0, 0, "resource/swordman.png")  # イメージバンク0番に読み込み

pl_x = 0  # 横軸の居場所の初期化
pl_y = 0

def update():
    global pl_x  # 関数外の変数の為一旦グローバルの宣言をしないといけない。
    global pl_y
    pl_x = pl_x + 1  # 右に1ずつ移動する
    pl_y = pl_y + 1
    if pl_x == 120:
        pl_x = 0
    if pl_y == 80:
        pl_y = 0

def draw():
    pyxel.cls(3)  # 描画 pyxel.cls(col)
    pyxel.blt(
        pl_x, pl_y, 0, 0, 0, 16, 20, 13
    )  # 描画 pyxel.blt(x, y, img, u, v, w, h, colkey)

pyxel.run(update, draw)
