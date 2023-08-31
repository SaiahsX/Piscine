// skyscraper.h
#ifndef SKYSCRAPER_H
#define SKYSCRAPER_H

typedef struct {
    int size;
    int **grid;
} SkyscraperGame;

SkyscraperGame *create_game(int size);
void free_game(SkyscraperGame *game);

#endif // SKYSCRAPER_H

