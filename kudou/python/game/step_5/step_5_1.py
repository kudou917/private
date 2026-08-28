import pyxel

WIDTH, HEIGHT = 120, 80 # 幅と高さのピクセル数
pyxel.init(WIDTH, HEIGHT, title="Squash")

# バーを動かすための変数と関数
bar_x = WIDTH / 2
bar_y = HEIGHT - 10
bar_width = 20 # パーの幅

def move_bar(): # キーの操作で動かす
    global bar_x
    if pyxel.btn(pyxel.KEY_LEFT): # 左キー
        bar_x = bar_x - 3
        if bar_x < bar_width / 2:# bar_x < 10
            bar_x = bar_width / 2
    if pyxel.btn(pyxel.KEY_RIGHT): # 右キー
        bar_x = bar_x + 3
        if bar_x > WIDTH - bar_width / 2:
            bar_x = WIDTH - bar_width / 2

def update():
    move_bar()

def draw():
    pyxel.cls(1) # 画面をクリアする
    pyxel.rect( bar_x - bar_width / 2, bar_y, bar_width, 2, 11) # パー
# xの初期位置、yの初期位置、幅、高さ、色
pyxel.run(update, draw)