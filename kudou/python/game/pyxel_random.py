import pyxel
pyxel.init(169, 120, title = "Pyxelの乱数")#初期化
for y in range(6):#縦列
    for x in range(8):# 横列
        cx = x * 20 + 10
        cy = y * 20 + 10
        col = pyxel.rndi(1, 15)# 1~15の色を乱数で設定
        pyxel.circ(cx, cy, 8, col)# 8は円の大きさ
pyxel.show()#表示して待機
