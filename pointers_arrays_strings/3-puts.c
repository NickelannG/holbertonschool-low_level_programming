#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 *
 * @str: pointer to a string
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str); /* Print current character */
		str++; /* Move on to the next character in the string */
	}
	_putchar('\n');
}
