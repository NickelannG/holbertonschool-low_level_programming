#include "main.h"
/**
 * _strlen - determines the length of a string
 *
 * @s: the pointer of a string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0; /* initialise the length counter to zero */

	/* Loop through the string until we reach the null character ('\0') */
	while (*s != '\0')
	{
		length++; /* increment the length counter */
		s++; /* move to the next character in string */
	}
	return (length);
}
