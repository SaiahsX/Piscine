// main.c
#include <unistd.h>
#include "skyscraper.h"

int main() {
    SkyscraperGame *game = create_game(4); // Create a 4x4 game board

    // Implement the puzzle solving logic here

    free_game(game); // Free memory before exiting
    return 0;
}

