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

	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
