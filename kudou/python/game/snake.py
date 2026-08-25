import random
import pyxel

CELL_SIZE = 8
GRID_W = 20
GRID_H = 15


class SnakeGame:

    def __init__(self):
        # 画面サイズ: 160x120 ピクセル
        pyxel.init(GRID_W * CELL_SIZE, GRID_H * CELL_SIZE, title="Snake Game")
        self.reset()
        pyxel.run(self.update, self.draw)

    def reset(self):
        self.snake = [(10, 7), (9, 7), (8, 7)]  # 先頭がインデックス0
        self.direction = (1, 0)  # 右向き
        self.next_direction = (1, 0)
        self.score = 0
        self.game_over = False
        self.spawn_food()

    def spawn_food(self):
        while True:
            pos = (random.randint(0, GRID_W - 1), random.randint(0, GRID_H - 1))
            if pos not in self.snake:
                self.food = pos
                break

    def update(self):
        if self.game_over:
            if pyxel.btnp(pyxel.KEY_SPACE):
                self.reset()
            return

        # キー入力による方向変更（逆走防止）
        if (
            pyxel.btnp(pyxel.KEY_UP)
            or pyxel.btnp(pyxel.KEY_W)
            and self.direction != (0, 1)
        ):
            self.next_direction = (0, -1)
        elif (
            pyxel.btnp(pyxel.KEY_DOWN)
            or pyxel.btnp(pyxel.KEY_S)
            and self.direction != (0, -1)
        ):
            self.next_direction = (0, 1)
        elif (
            pyxel.btnp(pyxel.KEY_LEFT)
            or pyxel.btnp(pyxel.KEY_A)
            and self.direction != (1, 0)
        ):
            self.next_direction = (-1, 0)
        elif (
            pyxel.btnp(pyxel.KEY_RIGHT)
            or pyxel.btnp(pyxel.KEY_D)
            and self.direction != (-1, 0)
        ):
            self.next_direction = (1, 0)

        # 6フレーム（0.2秒）ごとにヘビを1マス移動
        if pyxel.frame_count % 6 == 0:
            self.direction = self.next_direction
            head_x, head_y = self.snake[0]
            dx, dy = self.direction
            new_head = (head_x + dx, head_y + dy)

            # 壁または自己衝突判定
            if (
                new_head[0] < 0
                or new_head[0] >= GRID_W
                or new_head[1] < 0
                or new_head[1] >= GRID_H
                or new_head in self.snake
            ):
                self.game_over = True
                return

            self.snake.insert(0, new_head)

            # エサ取得判定
            if new_head == self.food:
                self.score += 10
                self.spawn_food()
            else:
                self.snake.pop()  # エサを食べていなければ末尾を削除

    def draw(self):
        pyxel.cls(0)  # 黒で画面クリア

        # エサの描画 (赤色: 8)
        fx, fy = self.food
        pyxel.rect(
            fx * CELL_SIZE, fy * CELL_SIZE, CELL_SIZE, CELL_SIZE, 8
        )

        # ヘビの描画 (頭: 明るい緑 11, 体: 緑 3)
        for i, (sx, sy) in enumerate(self.snake):
            col = 11 if i == 0 else 3
            pyxel.rect(
                sx * CELL_SIZE,
                sy * CELL_SIZE,
                CELL_SIZE - 1,
                CELL_SIZE - 1,
                col,
            )

        # UI描画
        pyxel.text(4, 4, f"SCORE: {self.score}", 7)

        if self.game_over:
            pyxel.text(54, 50, "GAME OVER", 8)
            pyxel.text(40, 62, "PRESS SPACE TO RESTART", 7)


if __name__ == "__main__":
    SnakeGame()