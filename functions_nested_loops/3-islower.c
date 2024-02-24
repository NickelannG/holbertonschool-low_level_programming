#include "main.h"
/**
 * _islower - checks for lowercase characters
 *
 * Return: 1 if c is lowercase or 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122) /* 97 in ASCII is a, and 122 is z */
	{
		_putchar(1);
	}
	else
	{
		_putchar(0);
	}
	_putchar('\n');
	return (0);
}
