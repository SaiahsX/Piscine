// main.c
#include <stdio.h>
#include "skyscraper.h"

int main() {
    int clues[16] = {2, 2, 1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int solution[4][4];

    solve_skyscraper(clues, solution);

    printf("Solution:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", solution[i][j]);
        }
        printf("\n");
    }

    return 0;
}

