#include "main.h"
/**
 * _islower - checks for lowercase characters
 *
 * @c: the character to be checked
 *
 * Return: 1 if c is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122) /* 97 in ASCII is a, and 122 is z */
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
