#include "main.h"
/**
 * puts2 - Function that prints every other character of a string,
 * starting with the first character,
 * followed by a new line
 *
 * @str: pointer to the beginning of the string to be printed
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0') /* Loop until end of string */
	{
		if (i % 2 == 0) /* Check if index is even */
		{
			_putchar(str[i]); /* Print the character at index i */
		}
		i++; /* increment index character */
	}
	_putchar('\n');
}
