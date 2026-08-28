import pyxel
import random
class App:
    def __init__(self):
        pyxel.init(160, 120, title= "Avoid Game")# 幅、高さ、タイトル
        self.reset()# 初期化
        pyxel.run(self.update, self.draw)# updete,drawを繰り返し実行
    def reset(self):
        self.player_x = 80# 初期状態の位置(横)数値が高くなると右に向かう
        self.player_y = 100# 初期状態の位置(縦)数値が高くなると下に向かう
        self.enemies = [] 
        self.score = 0#ゲームのスコア
        self.game_over = False
    def update(self):
        if self.game_over:
            if pyxel.btnp(pyxel.KEY_R):# 押したときだけ反応
                self.reset()#ゲームオーバー後のリスタート
            return
        if pyxel.btn(pyxel.KEY_LEFT):# 押してる間反応
            self.player_x -= 2# 左に移動
        if pyxel.btn(pyxel.KEY_RIGHT):# 右ボタンを押す
            self.player_x += 2# 右に移動
        self.player_x = max(0, min(self.player_x, pyxel.width - 8))
        if random.random() < 0.02:# 敵の追加を1.0~0.0で動く乱数から左辺未満の場合行う。
            self.enemies.append([random.randint(0, pyxel.width - 8), 0])
        for e in self.enemies:
            e[1] += 2# 画面上部から現れる障害物の初期化
        self.enemies = [e for e in self.enemies if e[1] < pyxel.height]
        for e in self.enemies:
            if abs(e[0] - self.player_x) < 8 and abs(e[1] - self.player_y) < 8:
                self.game_over = True# 接触判定
                break
        self.score += 1
    def draw(self):
        pyxel.cls(0)
        if not self.game_over:
            pyxel.text(5, 5, f"SCORE {self.score}", 7)# 現在のスコア
            pyxel.rect(self.player_x, self.player_y, 8, 8, 11)# プレイヤーの位置
            for e in self.enemies:
                pyxel.rect(e[0], e[1], 8, 8, 8)
        else:# ゲームオーバー時の表記
            pyxel.text(58, 50, "GAME OVER", 8)# 横、縦、指定の文字、文字の色
            pyxel.text(58, 62, f"SCORE {self.score}", 7)
            pyxel.text(45, 76, "PRESS R TO RETRY", 7)
App()