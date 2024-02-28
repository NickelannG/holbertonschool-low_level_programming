#include "main.h"
/**
 * swap_int - Swaps the values of two integers
 *
 * @a: Pointer to first integer to be swapped with second integer
 * @b: Pointer to second integer to be swapped with first integer
 */
void swap_int(int *a, int *b)
{
	/* Storing the value of first integer in a temporary variable */
	int temp = *a;
	/* Assign value of second integer to first integer */
	*a = *b;
	/**
	 * Assign value of temporary variable which hold first integer value
	 * to second integer
	 */
	*b = temp;
}
