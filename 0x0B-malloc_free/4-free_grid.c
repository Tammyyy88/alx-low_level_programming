#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees memory allocated for a 2-dimensional array of integers
 * @grid: pointer to the grid to be freed
 * @height: height of the grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL || height <= 0)
return;
i = 0;
while (i < height)
{
free(grid[i]);
i++;
}
free(grid);
}
