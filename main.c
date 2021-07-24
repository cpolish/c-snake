#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define WIDTH 20
#define HEIGHT 20

bool game_over;
int snake_x, snake_y, fruit_x, fruit_y, score;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN};
enum eDirection dir;

void setup() {
    game_over = false;
    dir = STOP;
    snake_x = WIDTH / 2;
    snake_y = WIDTH / 2;
    fruit_x = rand() % WIDTH;
    fruit_y = rand() % HEIGHT;
    score = 0;
}

void draw() {
    system("clear");

    for (int i = 0; i < WIDTH; i++) {
        printf("#");
    }

    printf("\n");

    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (j == 0 || j == (WIDTH - 1)) {
                printf("#");
            }
            else {
                printf(" ");
            }
        }

        printf("\n");
    }

    for (int i = 0; i < WIDTH; i++) {
        printf("#");
    }

    printf("\n");

}

void input() {

}

void logic() {

}

int main() {
    setup();
    
    while (!game_over) {
        draw();
        input();
        logic();
        // sleep(10);
    }

    return 0;
}