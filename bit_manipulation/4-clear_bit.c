#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: a pointer to the number
 * @index: the index of the bit to get starting from 0
 *
 * Return: 1 is successful or -1 if there's an error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
		return (-1);

	mask = ~(1UL << index);

	*n &= mask;

	return (1);
}
