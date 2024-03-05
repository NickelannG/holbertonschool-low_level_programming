#include "main.h"
/**
 * _print_rev_recursion - a function that prints a string in reverse
 *
 * @s: a pointer to a string
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	/* Recursively call the function with the next character in teh string */
	_print_rev_recursion(s + 1);

	_putchar(*s); /* After the recursive calls, print the current character */
}
