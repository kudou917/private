import pyxel
pyxel.init(120, 80, title= "画像の表示")# 初期化
pyxel.images[0].load(0, 0, "resource/swordman.png")# 読み込み
pyxel.blt(0, 0, 0, 0, 0, 16, 20)# 画像を表示
pyxel.show()# 表示したまま待機