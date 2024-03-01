#include "main.h"
/**
 * _strcmp - a function that compares two strings
 *
 * @s1: a pointer to the beginning of the first string
 * @s2: a pointer to the beginning of the second string
 *
 * Return: 0 if s1 and s2 are the same, less than 0 if s1 is less than s2,
 * greater than 0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	/* Iterate while corresponding characters in both string match */
	while (*s1 == *s2)
	{
		/**
		 * Check if we've reached the end of both strings
		 * (They're equal)
		 */
		if (*s1 == '\0')
		{
			return (0);
		}
		/* Move on to next character in both strings */
		s1++;
		s2++;
	}
	/**
	 * If we reach here, strings differ,
	 * Subtract ASCII values for comparison
	 */
	return (*s1 - *s2);
}
