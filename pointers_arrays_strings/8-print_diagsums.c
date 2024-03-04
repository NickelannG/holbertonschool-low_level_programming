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
	int j = size - 1;

	while (i < size)
	{
		sum1 += a[(i * size + i)];
		sum2 += a[(i * size + j)];
		i++;
		j--;
	}
	printf("%d %d\n", sum1, sum2);
}
