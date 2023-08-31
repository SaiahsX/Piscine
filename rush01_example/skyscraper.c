// skyscraper.c
#include "skyscraper.h"
#include <stdlib.h>

// Utility function to check if a given number is safe to place in a cell
int is_safe(int puzzle[4][4], int row, int col, int num) {
    // Check row and column
    for (int i = 0; i < 4; i++) {
        if (puzzle[row][i] == num || puzzle[i][col] == num) {
            return 0; // Not safe
        }
    }
    return 1; // Safe
}

// Recursive function to solve the puzzle using backtracking
int solve_util(int puzzle[4][4], int clues[16], int row, int col) {
    if (row == 4) {
        return 1; // Puzzle solved
    }

    int next_row = (col == 3) ? row + 1 : row;
    int next_col = (col + 1) % 4;

    if (puzzle[row][col] != 0) {
        return solve_util(puzzle, clues, next_row, next_col);
    }

    for (int num = 1; num <= 4; num++) {
        if (is_safe(puzzle, row, col, num)) {
            puzzle[row][col] = num;
            if (check_clues(puzzle, clues, row, col) && solve_util(puzzle, clues, next_row, next_col)) {
                return 1; // Found a valid solution
            }
            puzzle[row][col] = 0; // Backtrack
        }
    }
    return 0; // No valid solution found
}

// Function to solve the 4x4 skyscraper puzzle
void solve_skyscraper(int clues[16], int solution[4][4]) {
    int puzzle[4][4] = {0}; // Initialize empty puzzle
    solve_util(puzzle, clues, 0, 0);

    // Copy the solution to the provided solution array
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            solution[i][j] = puzzle[i][j];
        }
    }
}

