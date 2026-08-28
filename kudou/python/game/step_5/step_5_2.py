import pyxel

WIDTH,  HEIGHT = 120, 80 # 幅と高さのピクセル数
pyxel.init(WIDTH, HEIGHT, title="Squash")

# ボールを動かすための変数と関数
ball_x = 60
ball_y = 40
ball_vx = 2# ボールのスピード
ball_vy = 1
ball_r = 3

def update():
    global ball_x, ball_y, ball_vx, ball_vy
    ball_x = ball_x + ball_vx
    ball_y = ball_y + ball_vy
    if ball_x < ball_r: # 左端
        ball_vx = - ball_vx
    if ball_x > WIDTH - ball_r: # 右端
        ball_vx = - ball_vx
    if ball_y < ball_r: # 上端
        ball_vy = - ball_vy
    if ball_y > HEIGHT - ball_r: # 下端
        ball_vy = - ball_vy 


def draw():
    pyxel.cls(1) # 画面をクリアする
    pyxel.circ(ball_x, ball_y, ball_r, 8)

pyxel.run(update, draw)