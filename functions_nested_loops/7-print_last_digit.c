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
	if (n < 0)
	{
		_putchar((-n % 10) + 0);
	}
	else
	{
		_putchar((n % 10) + 0);
	}
	_putchar('\n');
}