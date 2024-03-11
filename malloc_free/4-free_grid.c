#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - a function tha frees a 2 dimensional grid
 *
 * @grid: 2 dimensional grid
 * @height: the height of the 2 dimensional grid
 *
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
