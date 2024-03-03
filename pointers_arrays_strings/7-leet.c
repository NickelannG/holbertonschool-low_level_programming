#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 *
 * @s: string to be modified
 *
 * Return: modified string
 */
char *leet(char *s)
{
	char src[] = "AaEeOoTtlL";
	char leet[] = "4433007711";
	char *temp = s; /* Temporary pointer to start of input string */
	int i;

	while (*s != '\0')
	{
		i = 0;
		while (i < 10)
		{
			/* Check if character in input matches src characters */
			if (*s == src[i])
			{
				*s = leet[i]; /* Replace with replacement character */
				break; /* Exit from inner loop */
			}
			i++; /* Move to next character in source array */
		}
		s++; /* Move onto next character in input string */
	}
	return (temp); /* Return pointer to start of modified string */
}
