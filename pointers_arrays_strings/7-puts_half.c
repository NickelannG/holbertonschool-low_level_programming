#include "main.h"
/**
 * puts_half -  function that pritns half of a string,
 * followed by a new line
 *
 * @str: a pointer to the beginning of a string
 *
 */
void puts_half(char *str)
{
	int length = 0;
	int i, start;

	while (str[length] != '\0') /* Calculating length of string */
	{
		length++;
	}
	if (length % 2 == 0) /* if length is even */
	{
		start = length / 2; /*Start from the middle */
	}
	else
	{
		start = (length - 1) / 2 + 1; /* If odd, start from next character */
	}
	i = start; /* initialise iterator with starting index */

	while (str[i] != '\0') /* continue loop until end of string */
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

