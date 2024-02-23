#include <stdio.h>
/**
 * main - prints all possible sombinations of a single-digit numbers
 * separated by , followed by a space
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10 ; n++)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('$');
	return (0);
}
