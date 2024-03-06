#include "main.h"
/**
 * _sqrt_helper - a recursive helper function to find the sqaure root
 *
 * @n: the number we are square rooting
 * @i: a guess for the square root
 *
 * Return: the natural square root of number n,
 * or -1 if n does not have a natural square root
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		/* recurse with guess, incremented by 1 */
		return (_sqrt_helper(n, i + 1));
	}
}

/**
 * _sqrt_recursion - a recursive function that returns
 * the natural square root of a number
 *
 * @n: the number we are calculating the square root from
 *
 * Return: the natural square root of number n, or
 * -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0) /* Base case */
	{
		return (-1);
	}
	return (_sqrt_helper(n, 1));
}
