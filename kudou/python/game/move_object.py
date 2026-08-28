import pyxel

WIDTH, HEIGHT = 120, 80
pyxel.init(WIDTH, HEIGHT, title="キャラクターの移動")

obj_x = [0, 0, 0, 0, 0]
obj_y = [10, 25, 40, 55, 70]
obj_vx = [1, 2, 3, 4, 5]

def update(): # メイン処理（更新処理）
    for i in range(5):
        obj_x[i] = obj_x[i] + obj_vx[i]# x座標を変化させる
        if obj_x[i] < 0 or WIDTH < obj_x[i]:# 右端まできたら
            obj_vx[i] = -obj_vx[i]# 反対方向に移動

def draw():
    pyxel.cls(0)# 初期化
    for i in range(5):# 円の表示
        pyxel.circ(obj_x[i], obj_y[i], 7, 7 + i)

pyxel.run(update, draw)