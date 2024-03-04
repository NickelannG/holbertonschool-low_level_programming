#include "main.h"
/**
 * _strchr - a function that locates a charcter in a string
 *
 * @s: a pointer to the beginning of a string
 * @c: The character to be located
 *
 * Return: a pointer to the first occurence of he charater, or
 * NULL if character not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return ('\0'); /* If character not found */
}
