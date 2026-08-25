import pyxel
def update():
    # 毎フレーム呼ばれる、ゲームの状態を更新する場所
    pass
def draw():
    # 毎フレーム呼ばれる、画面を描く場所
    pyxel.cls(0)  # 画面を色0（黒）でクリア
    pyxel.text(50, 40, "Hello Pyxel!", 7)  # (x, y, 文字, 色)
pyxel.init(160, 120, title="Hello Pyxel")  # 画面の幅・高さ・タイトル
pyxel.run(update, draw)