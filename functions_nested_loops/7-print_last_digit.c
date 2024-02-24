#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: the number to be checked
 *
 * Return: Last_digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = -n % 10;
	}
	else
	{
		last_digit = n % 10;
	}
	_putchar('\n');
	_putchar(last_digit + '0');
	return (last_digit);
}
