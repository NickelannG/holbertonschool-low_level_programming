#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 *
 * @s: string o be modified
 *
 * Return: modified string
 */
char *leet(char *s)
{
	/* Pointer to iterate through the input string */
	char *ptr = s;

	/* Array of characters to be replaced */
	char a[] = "aeotl";
	/* Array of corresponding 1337 replacements */
	char n[] = "43071";
	int i; /* Loop counters */

	/* Loop each character in the input string */
	while (*ptr)
	{
		for (i = 0; a[i]; i++)
		{
			if (*ptr == a[i])
			{
				*ptr = n[i];
				break;
			}
			else if (*ptr >= 'A' && *ptr <= 'Z' && *ptr - 'A'
					== a[i])
			{
				*ptr = n[i];
				*ptr += 32;
				break;
			}
		}
		ptr++;
	}
	return (s);
}
