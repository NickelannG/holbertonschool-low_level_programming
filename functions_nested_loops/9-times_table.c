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
			{
				_putchar (',');
				_putchar(' ');

				if (product < 10) /* Print tens digit (if greater that 9) */
					_putchar(' ');
				else
					_putchar(product / 10 + '0');

				_putchar(product % 10 + '0'); /* Print ones digit */
			}
		}
		_putchar('\n');
	}
}
