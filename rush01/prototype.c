#include <stdio.h>

// Function to count visible skyscrapers from left to right for a given row
int countVisibleFromLeft(int row, int grid[4][4]) {
    int max = 0, count = 0;
    for (int i = 0; i < 4; i++) {
        if (grid[row][i] > max) {
            max = grid[row][i];
            count++;
        }
    }
    return count;
}

// Function to count visible skyscrapers from right to left for a given row
int countVisibleFromRight(int row, int grid[4][4]) {
    int max = 0, count = 0;
    for (int i = 3; i >= 0; i--) {
        if (grid[row][i] > max) {
            max = grid[row][i];
            count++;
        }
    }
    return count;
}

// Function to count visible skyscrapers from top to bottom for a given column
int countVisibleFromTop(int col, int grid[4][4]) {
    int max = 0, count = 0;
    for (int i = 0; i < 4; i++) {
        if (grid[i][col] > max) {
            max = grid[i][col];
            count++;
        }
    }
    return count;
}

// Function to count visible skyscrapers from bottom to top for a given column
int countVisibleFromBottom(int col, int grid[4][4]) {
    int max = 0, count = 0;
    for (int i = 3; i >= 0; i--) {
        if (grid[i][col] > max) {
            max = grid[i][col];
            count++;
        }
    }
    return count;
}

// Function to check visibility for the entire grid
int checkvisibility(int grid[4][4], int gridv[4][4]) {
    // Check rows
    for (int i = 0; i < 4; i++) {
        if (countVisibleFromLeft(i, grid) != gridv[2][i] || countVisibleFromRight(i, grid) != gridv[3][i]) {
            return 0;
        }
    }

    // Check columns
    for (int i = 0; i < 4; i++) {
        if (countVisibleFromTop(i, grid) != gridv[0][i] || countVisibleFromBottom(i, grid) != gridv[1][i]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int gridv[4][4] = {
        {2, 1, 3, 2}, // top
        {1, 3, 2, 2}, // bottom
        {2, 4, 3, 1}, // left
        {2, 1, 2, 2}  // right
    };

    int grid[4][4] = {
        {3, 4, 1, 2}, // line 1
        {1, 2, 3, 4}, // line 2
        {2, 3, 4, 1}, // line 3
        {4, 1, 2, 3}  // line 4
    };

    if (checkvisibility(grid, gridv)) {
        printf("The grid is valid.\n");
    } else {
        printf("The grid is invalid.\n");
    }

    return 0;
}
