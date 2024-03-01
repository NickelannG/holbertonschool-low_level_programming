#include "main.h"
#include <stdio.h>
/**
 * print_array - Function that prints n elements of an array of integers,
 * followed by a new line
 *
 * @a: pointer of the beginning of the array
 *
 * @n: the number of elements of the array to be printed
 *
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n) /* Iterate over the elements of array */
	{
		printf("%d", a[i]); /* print current element */

		 /* If not last element, print comma and space */
		if (i < n - 1)
		{
			printf(", ");
		}
		i++; /* move on to teh next element*/
	}
	printf("\n");
}
