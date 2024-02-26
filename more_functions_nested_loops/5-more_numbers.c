#include "main.h"
/**
 * more_numbers - prints 10 times the numbers from 0-14
 * followed by a new line
 *
 */
void more_numbers(void)
{
	int j;
	int i;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
