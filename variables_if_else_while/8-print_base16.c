#include <stdio.h>
/**
 * main - print all numbers of base 16 in lowercase
 * followed by a new line
 *
 * Return: always 0
 */
int main(void)
{
	char ch = '0';

	for (ch = 0; ch < 16; ch++)
	{
		if (ch < 10)
			putchar(ch + '0');
		else
			putchar(ch - 10 + 'a');
	}
	putchar('\n');
	return (0);
}
