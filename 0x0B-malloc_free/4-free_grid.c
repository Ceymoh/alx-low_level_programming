#include "main.h"
#include <stdio.h>
#include  <stdlib.h>

/**
 * free_grid - frees dimension grid
 * @grid: address of the 2 dimensional grid
 * @height: height of the grid
 * Return: Nothing
 *
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

