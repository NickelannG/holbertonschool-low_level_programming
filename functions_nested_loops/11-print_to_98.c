#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural number from n to 98
 * followed by a new line
 *
 * @n: start of natural numbers
 * Return: always 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98) /* Check if its the last number (98) */
			{
				printf("%d\n", n); /* Print it without a comma and new line */
			}
			else
			{
				printf("%d, ", n); /* Print it with a comma and space */
			}
		}
	}
	else
	{
		/**
		 * If n is greater than 98 (desceding order)
		 * use a for loop to iterate from n to 98 (downward)
		 */
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d\n", n);
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
}
