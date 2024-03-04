#include "main.h"
/**
 * _strstr - a function that locates a substring
 *
 * @haystack: a pointer to a string
 * @needle: a pointer to a substring within the haystack string
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	/* If either haystack or needle is NULL */
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char *h = haystack; /* Pointer to iterate through haystsack */
		char *n = needle; /* Pointer to iterate through needle */

		/* Check for substring match */
		while (*h != '\0' && *n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		/**
		 * If either needle is found in haystack,
		 * return pointer to start of needle
		 */
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
