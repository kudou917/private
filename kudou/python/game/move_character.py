import pyxel

WIDTH, HEIGHT = 120, 80
pyxel.init(WIDTH, HEIGHT, title="キャラクターの移動")
pyxel.images[0].load(0, 0, "resource/swordman.png")  # イメージバンク0番に読み込み

pl_x = WIDTH // 2
pl_y = HEIGHT // 2


def update():
    global pl_x, pl_y  # 関数外の変数の為一旦グローバルの宣言をしないといけない。
    if pyxel.btn(pyxel.KEY_DOWN) and pl_y < 70:
        pl_y = pl_y + 1
    if pyxel.btn(pyxel.KEY_UP) and pl_y > 11:
        pl_y = pl_y - 1
    if pyxel.btn(pyxel.KEY_RIGHT) and pl_x < 112:
        pl_x = pl_x + 1  # 右に1ずつ移動する
    if pyxel.btn(pyxel.KEY_LEFT) and pl_x > 8:
        pl_x = pl_x - 1  # 左に1ずつ移動する
    if pl_x == 120:
        pl_x = 0
    if pl_y == 80:
        pl_y = 0


def draw():
    pyxel.cls(3)  # 描画 pyxel.cls(col)
    pyxel.blt(
        pl_x - 8, pl_y - 12, 0, 0, 0, 16, 24, 13#幅16ピクセル高さ24ピクセルのため中心は8と12
    )  # 描画 pyxel.blt(x, y, img, u, v, w, h, colkey)
    xy = f"({pl_x}, {pl_y})"
    pyxel.text(1, 1, xy, 7)


pyxel.run(update, draw)
