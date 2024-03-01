#include "main.h"
/**
 * _strncpy - A function that copies a string
 *
 * @dest: Pointer to the beginning of first string
 * @src: Pointer to the beginning of the second string
 * @n: number of bytes to be copied from src string
 *
 * Return: a pointer to the destination string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest; /* Store the starting address of dest */

	/* Append at most n characters from src to dest */
	while (*src != '\0' && n-- > 0)
	{
		*ptr++ = *src++; /* Copy character from src to dest */
	}

	/* Fill reamining characters in dest with null terminator if needed */
	while (n-- > 0)
	{
		*ptr++ = '\0';
	}
	return (dest); /* Move pointer to the resulting string dest */
}
