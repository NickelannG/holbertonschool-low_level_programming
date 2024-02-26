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
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0'); /* Prints tens digit */
			}
			_putchar((i % 10) + '0'); /* prints the ones digit */
		}
		_putchar('\n');
	}
}
