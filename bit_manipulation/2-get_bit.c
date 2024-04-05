#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: the number
 * @index: the index of the bit to get starting from 0
 *
 * Return: the value of the bit at index or -1 if there's an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
