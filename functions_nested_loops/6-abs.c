#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 *
 * @int n: the integer to be checked
 *
 * Return: -n if n is a negative number, n if n is positive
 */
int _abs(int)
{
	int n;

	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
	_putchar('\n');
}
