#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * array_iterator - executes a function given as a parameter on each
 * element of an array
 *
 * @array: the array
 * @size: size of the array
 * @action: pointer to the function to be used
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	/* Check if empty */
	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i = i + 1; /* move on to the next */
		}
	}
}
