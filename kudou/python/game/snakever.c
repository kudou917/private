#include "raylib.h"
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define CELL_SIZE 20
#define GRID_W 20
#define GRID_H 15
#define MAX_SNAKE (GRID_W * GRID_H)

typedef struct {
    int x;
    int y;
} Point;

typedef struct {
    Point snake[MAX_SNAKE];
    int length;
    Point dir;
    Point next_dir;
    Point food;
    int score;
    bool game_over;
    int frame_count;
} GameState;

GameState game;

void SpawnFood(void) {
    while (1) {
        int fx = rand() % GRID_W;
        int fy = rand() % GRID_H;
        bool on_snake = false;

        for (int i = 0; i < game.length; i++) {
            if (game.snake[i].x == fx && game.snake[i].y == fy) {
                on_snake = true;
                break;
            }
        }

        if (!on_snake) {
            game.food.x = fx;
            game.food.y = fy;
            break;
        }
    }
}

void ResetGame(void) {
    game.snake[0] = (Point){10, 7};
    game.snake[1] = (Point){9, 7};
    game.snake[2] = (Point){8, 7};
    game.length = 3;

    game.dir = (Point){1, 0};
    game.next_dir = (Point){1, 0};
    game.score = 0;
    game.game_over = false;
    game.frame_count = 0;

    SpawnFood();
}

void UpdateGame(void) {
    if (game.game_over) {
        if (IsKeyPressed(KEY_SPACE)) {
            ResetGame();
        }
        return;
    }

    // キー入力検知（逆走防止）
    if ((IsKeyPressed(KEY_UP) || IsKeyPressed(KEY_W)) && game.dir.y != 1) {
        game.next_dir = (Point){0, -1};
    } else if ((IsKeyPressed(KEY_DOWN) || IsKeyPressed(KEY_S)) && game.dir.y != -1) {
        game.next_dir = (Point){0, 1};
    } else if ((IsKeyPressed(KEY_LEFT) || IsKeyPressed(KEY_A)) && game.dir.x != 1) {
        game.next_dir = (Point){-1, 0};
    } else if ((IsKeyPressed(KEY_RIGHT) || IsKeyPressed(KEY_D)) && game.dir.x != -1) {
        game.next_dir = (Point){1, 0};
    }

    game.frame_count++;

    // 6フレーム（30FPS時: 0.2秒）ごとに移動
    if (game.frame_count % 6 == 0) {
        game.dir = game.next_dir;
        Point new_head = {
            game.snake[0].x + game.dir.x,
            game.snake[0].y + game.dir.y
        };

        // 壁との衝突判定
        if (new_head.x < 0 || new_head.x >= GRID_W ||
            new_head.y < 0 || new_head.y >= GRID_H) {
            game.game_over = true;
            return;
        }

        // 自身の体との衝突判定
        for (int i = 0; i < game.length; i++) {
            if (new_head.x == game.snake[i].x && new_head.y == game.snake[i].y) {
                game.game_over = true;
                return;
            }
        }

        // 体の座標を後方へシフト（Pythonの insert(0, ...) と pop() を配列で再現）
        for (int i = game.length; i > 0; i--) {
            game.snake[i] = game.snake[i - 1];
        }
        game.snake[0] = new_head;

        // エサの取得判定
        if (new_head.x == game.food.x && new_head.y == game.food.y) {
            game.score += 10;
            game.length++;
            SpawnFood();
        }
    }
}

void DrawGame(void) {
    BeginDrawing();
    ClearBackground(BLACK);

    // エサの描画（赤色）
    DrawRectangle(game.food.x * CELL_SIZE, game.food.y * CELL_SIZE, 
                  CELL_SIZE, CELL_SIZE, RED);

    // ヘビの描画（頭: 明るい緑, 体: 暗めの緑）
    for (int i = 0; i < game.length; i++) {
        Color col = (i == 0) ? LIME : DARKGREEN;
        DrawRectangle(game.snake[i].x * CELL_SIZE, game.snake[i].y * CELL_SIZE, 
                      CELL_SIZE - 1, CELL_SIZE - 1, col);
    }

    // UIの描画
    DrawText(TextFormat("SCORE: %d", game.score), 10, 10, 20, RAYWHITE);

    if (game.game_over) {
        DrawText("GAME OVER", 120, 120, 30, RED);
        DrawText("PRESS SPACE TO RESTART", 80, 170, 18, RAYWHITE);
    }

    EndDrawing();
}

int main(void) {
    srand((unsigned int)time(NULL));

    InitWindow(GRID_W * CELL_SIZE, GRID_H * CELL_SIZE, "Snake Game (C + Raylib)");
    SetTargetFPS(30);

    ResetGame();

    while (!WindowShouldClose()) {
        UpdateGame();
        DrawGame();
    }

    CloseWindow();
    return 0;
}