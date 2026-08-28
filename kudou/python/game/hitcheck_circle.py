import pyxel
import math
pyxel.init(160, 120, title="ヒットチェック 円")
pyxel.mouse(True)

rx, ry = 0, 0
RED_R =16
bx, by = 80, 60
BLUE_R = 24

def update():
    global rx, ry
    rx = pyxel.mouse_x
    ry = pyxel.mouse_y

def draw():
    pyxel.cls(0)
    col = 8 # 赤
    d = math.sqrt((rx - bx) ** 2 + (rx - bx) ** 2)
    if d <= RED_R + BLUE_R:
        col = 10
    pyxel.circ(rx, ry, RED_R, col)
    pyxel.circ(bx, by, BLUE_R, 12)

pyxel.run(update, draw)