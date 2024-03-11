#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - a function tha returns a pointer to a 2
 * dimensional array of integers
 *
 * @width: width of the 2D array
 * @height: height of the 2D array
 *
 * Return: the pointer to a 2D array, otherwise NULL on failure or if
 * width or height is less than or equal to 0.
 */
int **alloc_grid(int width, int height)
{
	int **grid, i = 0, j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(height * sizeof(int));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
