#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 * followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	int n = '0';

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
	}
	putchar('\n');
	return (0);
}
