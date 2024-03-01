#include "main.h"
/**
 * *_strcpy - Function that copies a string to another string
 *
 * @src: points to the beginning of the string to be copied
 *
 * @dest: points to the buffer where first string is to be copied into
 *
 * Return: pointer to dest
 *
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest; /* Store the starting address of dest */
	
	/* Copying the ceontents of src to dest until null terminator */
	while (*src)
	{
		*dest++ = *src; /*deference and increment both pointers */
	}
	/* Include null terminator to the end of copied string */
	*dest = '\0';

	return (dest_start); /* Return pointer to destination string */
}
