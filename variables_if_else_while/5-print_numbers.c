#include <stdio.h>
/**
 * main - prints all single digit number of base 10 starting from 0
 * followed by a new line
 *
 * Return: always 0
 */
int main(void)
{
	int n = '0';

	for (n = 0; n <= 9; ++n)
	{
		printf("%d", n);
	}

	printf("\n");
	return (0);
}
