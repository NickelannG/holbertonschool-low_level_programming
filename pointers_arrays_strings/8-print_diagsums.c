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

	while (i < size) /* Sum of first diagonal */
	{
		sum1 += a[(i * size) + i];
		i++;
	}
	i = 0; /* Reset */

	while (i < size) /* Sum of second diagonal */
	{
		sum2 += a[(size -1) + ((size - 1) * i)];
		i++;
	}
	printf("%d %d\n", sum1, sum2);
}
