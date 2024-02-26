#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: the number of backslashes to print if n is 0 or less,
 * only a new line character is printed
 *
 */
void print_diagonal(int n)
{
	int row;
	int column;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (row = 0; row < n; row++)
	{
		for (column = 0; column < row; column++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
