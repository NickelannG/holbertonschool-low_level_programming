#include "main.h"
/**
 * print_rev - prints a string in reverse
 *
 * @s: pointer to a string
 *
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0') /* Calculating string legnth */
	{
		length++;
	}
	while (length > 0)
	{
		/* Print character at index length - 1 (reverse) */
		_putchar(s[length - 1]);
		length--;
	}
	_putchar('\n');
}

