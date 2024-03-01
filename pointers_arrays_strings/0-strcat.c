#include "main.h"
#include <string.h>
/**
 * _strcat - A function that concatenates two strings
 *
 * @dest: a pointer to the beginning of the first string
 * @src: a pointer to the beginning of the second string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	/* Move ptr to the end of dest*/
	while (*ptr != '\0')
	{
		ptr++;
	}

	/* Copy characters from src to dest */
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	/* Add null terminator */
	*ptr = '\0';
	return (dest);
}
