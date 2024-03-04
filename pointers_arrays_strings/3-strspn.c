#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: a pointer to a string to find the length of
 * @accept: a pointer to a string consisting of acceptable characters
 *
 * Return: The number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		/* Pointer to beginning of accept for each character in s */
		char *a = accept;

		while (*a != '\0')
		{
			/* Check if current character in s is in accept */
			if (*s == *a)
			{
				count++;
				break;
			}
			a++;
		}
		if (*a == '\0')
		{
			break;
		}
		s++;
	}
	return (count);
}
