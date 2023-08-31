// skyscraper.c
#include <stdlib.h>
#include "skyscraper.h"

SkyscraperGame *create_game(int size) {
    SkyscraperGame *game = (SkyscraperGame *)malloc(sizeof(SkyscraperGame));
    if (!game) {
        return NULL; // Memory allocation failed
    }

    game->size = size;
    game->grid = (int **)malloc(size * sizeof(int *));
    if (!game->grid) {
        free(game);
        return NULL; // Memory allocation failed
    }

    for (int i = 0; i < size; i++) {
        game->grid[i] = (int *)malloc(size * sizeof(int));
        if (!game->grid[i]) {
            // Free previously allocated memory and return NULL
            for (int j = 0; j < i; j++) {
                free(game->grid[j]);
            }
            free(game->grid);
            free(game);
            return NULL; // Memory allocation failed
        }
    }

    // Initialize the grid with zeros
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            game->grid[i][j] = 0;
        }
    }

    return game;
}

void free_game(SkyscraperGame *game) {
    for (int i = 0; i < game->size; i++) {
        free(game->grid[i]);
    }
    free(game->grid);
    free(game);
}

