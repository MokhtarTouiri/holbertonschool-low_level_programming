#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid
 * @grid: grid to frees
 * @height: height grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL || height <= 0)
return;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
