#include "main.h"
/**
 * string_toupper - a function that changes all lowercase letters
 * of a string to uppercase
 *
 * @str: Pointer to a string to be modified
 *
 * Return: the modified string
 */
char *string_toupper(char *str)
{
	char *ptr = str; /* Initialise a pointer to beginning of string */

	while (*ptr != '\0') /* Lopps through string until null */
	{
		if (*ptr >= 97 && *ptr <= 122)
		{
			/**
			 * Convert lowercase to uppercase.
			 * Subtract ASCII value of 'a' with ASCII value of 'A'
			 */
			*ptr = *ptr - 32;
		}
		ptr++; /* Move on to the next character */
	}
	return (str);
}
