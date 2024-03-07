#include "main.h"
/**
 * is_prime_number_helper - a helper function that checks if
 * the input number n is divisible by any number
 * other than 1 and itself
 *
 * @n: the input integer
 * @i: Divisor to check
 *
 * Return: 1 if n is a prime number, 0 if otherwise.
 */
int is_prime_number_helper(int n, int i)
{
	/* Base case */
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	/* Check next divisor */
	return (is_prime_number_helper(n, i - 1));
}

/**
 * is_prime_number - is a function determines whether an input
 * integer is a prime number
 *
 * @n: the input integer
 *
 * Return: 1 if n is a prime number, 0 if otherwise.
 */
int is_prime_number(int n)
{
	/* Base case */
	if (n <= 1) /* 0 and 1 are not prime number */
	{
		return (0);
	}
	/* Checking divisors from n-1 */
	return (is_prime_number_helper(n, n - 1));
}
