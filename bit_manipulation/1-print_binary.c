#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: the number
 *
 */

void print_binary(unsigned long int n)
{
	int num_bits, i, bit;
	int leading_zero = 1;

	/* check if the number is 0 */
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	/* to get total number of bits for unsigned long int */
	num_bits = sizeof(unsigned long int) * 8;

	/* start from MSB */
	i = num_bits - 1;

	/* iterate through n to find first non-zero bit */
	while (i >= 0 && ((n >> i) & 1) == 0)
		i--;

	while (i >= 0)
	{	/* i-th bit of n */
		bit = (n >> i) & 1;

		if (bit)
			leading_zero = 0;
		if (!leading_zero || i == 0)
			_putchar(bit + '0');
		i--;
	}

}
