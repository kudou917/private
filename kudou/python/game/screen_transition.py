import pyxel
pyxel.init(120, 80, title = "画面遷移")

TITLE, PLAY, OVER  = 0, 1, 2, 
scene = TITLE
timer = 0
def update():
    global scene, timer
    timer = timer + 1

    if scene == TITLE:
        if pyxel.btn(pyxel.KEY_SPACE):
            scene = PLAY

    if scene == PLAY:
        if pyxel.btn(pyxel.KEY_RETURN):
            scene = OVER
            timer = 0

    if scene == OVER:
        if timer == 120:
            scene = TITLE

def draw():
    pyxel.cls(0)

    if scene == TITLE:
        pyxel.text(50, 20, "TITLE", 11)
        if timer % 30 < 15:
            pyxel.text(35, 40, "Press [SPACE]", 7)

    if scene == PLAY:
        pyxel.text(40, 20, "GAME PLAY", 12)
        if timer % 30 < 15:
            pyxel.text(35, 40, "Press [ENTER]", 6)

    if scene == OVER:
        pyxel.rect(0, 19, timer, 7, 8)
        pyxel.text(40, 20, "GAME OVER", 0)

pyxel.run(update, draw)