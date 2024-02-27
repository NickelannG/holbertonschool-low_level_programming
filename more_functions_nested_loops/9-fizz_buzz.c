#include "main.h"
/**
 *fizz_buzz - prints numbers from 1-100, followed by a new line
 * for multiples of 3, prints fizz and for multiples of 5, prints buzz
 */
void fizz_buzz(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if (n % 3 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		else if (n % 5 == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if (n < 10)
		{
			_putchar(n + '0');
		}
		else
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		if (n != 100)
		{
			_putchar(' ');
		}
	}
	_putchar('\n');
}
