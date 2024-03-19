#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - a function that searches for an integer
 *
 * @array: an array
 * @size: number of elements in the array
 * @cmp: a function to be used to compare values
 *
 * Return: the index of the first element, or -1 if no element matches,
 * or if the size is less than or equal to 0
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; ++i)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1); /* If no element matches */
}
