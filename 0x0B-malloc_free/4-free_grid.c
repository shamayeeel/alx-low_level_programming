#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2D array of integers
 * @grid: the 2D array to be freed
 * @height: the number of rows in the array
 *
 * This function frees the memory allocated to a 2D array of integers.
 */
void free_grid(int **grid, int height)
{
    int i;

    for (i = 0; i < height; i++)
    {
        free(grid[i]);
    }

    free(grid);
}

