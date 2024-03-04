#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 *
 * @s: a pointer to a string to be searched
 * @accept: a pointer to a string with the bytes we are searching for in s
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return ('\0');
}
