#include "main.h"
/**
 * rev_string - a function that reverses a string
 *
 * @s: pointer to a string to be reversed
 *
 */
void rev_string(char *s)
{
	/* Calculate length of string */
	int length = 0;
	char temp;
	int i = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	/**
	 * Swap characters from beginning and end,
	 * iterating halfway through string
	 */
	while (i < length / 2) /* Swapping 2 letters at a time */
	{
		temp = s[i];
		/**
		 * Replace current character from corresponding mirrored
		 * position
		 */
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
		i++; /* Move to next pair of characters */
	}
}
