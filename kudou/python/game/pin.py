import pyxel


class App:

    def __init__(self):
        pyxel.init(160, 120, title="Game Start")
        self.x = 80
        self.y = 60
        pyxel.run(self.update, self.draw)

    def update(self):
        # キー入力で座標を更新
        if pyxel.btn(pyxel.KEY_LEFT):
            self.x -= 2
        if pyxel.btn(pyxel.KEY_RIGHT):
            self.x += 2
        if pyxel.btn(pyxel.KEY_UP):
            self.y -= 2
        if pyxel.btn(pyxel.KEY_DOWN):
            self.y += 2

    def draw(self):
        pyxel.cls(0)  # 画面クリア（黒）
        pyxel.rect(self.x, self.y, 8, 8, 9)  # 四角形を描画


App()