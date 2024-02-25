#include "main.h"
/**
 * times_table - prints out 9 times table starting with 0
 *
 */
void times_table(void)
{
	int row, col, product;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			product = row * col;
			if (col == 0)
				_putchar('0'); /* Print first digit */

			else
				_putchar(' '); /* Add a space before number */

			if (product >= 10) /* Print the product */
			{
				_putchar('0' + product / 10); /* Print tens digit */
				_putchar ('0' + product % 10); /* prints ones digit */
			}
			else
			{
				_putchar(' '); /* Add a space before the single-digit */
				_putchar(product + '0'); /* Print single digit */
			}

			if (col < 9)
				_putchar(','); /* Print comma and space */
			else
				_putchar('\n');
		}
	}
}
