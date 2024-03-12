#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers
 *
 * @min: minimum integers in the array
 * @max: maximum integers in the array
 *
 * Return: pointer to the newly created array,
 * or NULL if min is greater than max or if malloc fails
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
