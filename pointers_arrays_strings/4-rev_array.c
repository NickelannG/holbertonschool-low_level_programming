#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array of integers
 *
 * @a: a pointer to the beginning of an array
 * @n: the number of elements in an array
 *
 */
void reverse_array(int *a, int n)
{
	int temp;
	int start = 0; /* Initialise variable to keep track of start index */
	int end = n - 1; /* Initialise variable to keep track of end index */

	while (start < end)
	{
		/* Swap elements at start and end indices */
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++; /* Move start index towards end of array */

		end--; /* Move end index to start of array */
	}
}
