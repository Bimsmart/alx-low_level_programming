#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - this function frees a 2D grid
 * @grid: a pointer to a pointer to grid
 * @height: the height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}
	free(grid);
}

