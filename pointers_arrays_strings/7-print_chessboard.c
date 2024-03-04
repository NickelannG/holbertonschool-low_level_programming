#include "main.h"
/**
 * print_chessboard - a function that prints a chessboard
 *
 * @a: a pointer to an array of 8 characters
 */
void print_chessboard(char (*a)[8])
{
	int i = 0; /* Initialise rows */

	while (i < 8)
	{
		int j = 0; /* Initialise columns */

		while (j < 8)
		{
			/* Print all positions (i, j) on chessboard array */
			_putchar(a[i][j]);
			j++;
		}
		/* Move onto next line after printing each row */
		_putchar('\n');
		i++;
	}
}
