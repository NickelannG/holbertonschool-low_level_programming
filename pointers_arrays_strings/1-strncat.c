#include "main.h"
#include <string.h>
/**
 * _strncat - A function that concatenates two strings
 *
 * @dest: a pointer to the beginning of the first string
 * @src: a pointer to the beginning of the second string
 * @n: the number of bytes to be used from src string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest; /* Pointer to the end of dest */

	/* Move ptr to the end of dest*/
	while (*ptr != '\0')
	{
		ptr++;
	}

	/* Append at most n characters from src to dest */
	while (*src != '\0' && n-- > 0)
	{
		*ptr++ = *src++; /* Copy characters from src to dest */
	{
		*ptr = '\0'; /* Add numm terminator to end of dest */

		return (dest); /* Return a pointer to teh resulting string dest */
}
