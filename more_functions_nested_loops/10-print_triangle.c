#include "main.h"
/**
 * print_triangle - prints a triangle followed by a new line
 *
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int row = 0;
	int column;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	/* loop through each row of the triangle */
	for (row = 1; row <= size; row++)
	{
	/**
	 *  Print spaces before printing the #
	 *  The number of spaces decreses with each row
	 */
		for (column = 1; column <= size - row; column++)
		{
			_putchar(' ');
		}
	/**
	 * Print # characters for the current row
	 * The number of # characters increases with each row
	 */
		for (column = 1; column <= row; column++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
