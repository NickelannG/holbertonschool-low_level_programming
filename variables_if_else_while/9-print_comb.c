#include <stdio.h>
/**
 * main - prints all possible sombinations of a single-digit numbers
 * separated by , followed by a space
 *
 * Return: always 0
 */
int main(void)
{
	int number;

	for (number = 0; number < 10 ; number++)
	{
		putchar(number + 0);
		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
