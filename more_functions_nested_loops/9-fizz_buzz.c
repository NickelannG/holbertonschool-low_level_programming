#include <stdio.h>
#include "main.h"
/**
 *fizz_buzz - prints numbers from 1-100, followed by a new line
 * for multiples of 3, prints fizz and for multiples of 5, prints buzz
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else if (n < 10)
		{
			printf("%d", n);
		}
		else
		{
			printf("%d", n);
		}
		if (n != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
