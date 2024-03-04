#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - A function that prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: a pointer to the first element of the square matrix
 * @size: size of the matrix square
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0; /* Sum of first diagonal */
	int sum2 = 0; /* Sum of second diagonal */
	int i = 0;

	while (i < size) /* Rows */
	{
		int j = 0;

		while (j < size) /* Columns */
		{
			if (i == j)
			{
				/* Add value at position a[i][j] to sum2 */
				sum1 += *(a + i * size + j);
			}
			j++;
		}
		j = 0; /* Reset */

		/* Sum of secondary column */
		while (j < size)
		{
			if (i + j == size - 1)
			{
				sum2 += *(a + i * size + j);
			}
			j++;
		}
		i++;
	}
	printf("%d %d\n", sum1, sum2);
}
