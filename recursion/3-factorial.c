#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number
 *
 * @n: a number we are finding the factorial of
 *
 * Return: the factorial of a given number. If n is lower than zero,
 * return -1.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
