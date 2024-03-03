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
	char lower;

	/* Loop each character in the input string */
	while (*ptr)
	{
		for (i = 0; a[i]; i++)
		{
			lower = *ptr;
			if (lower >= 'A' && lower <= 'Z')
			{
				lower += 32; /* Convert to lowercase */
			}
			/* Check if lowercase character matches replacement */
			if (lower == a[i])
			{
				*ptr = n[i]; /* Replace character with 1337 */
				break; /* Exti inner loop if match is found */
			}
		}
		ptr++;
	}
	return (s);
}
