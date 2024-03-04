#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 *
 * @b: The constant byte to fill memory with
 * @s: A pointer to the memory area to be filled
 * @n: number of bytes to fill
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s; /* Pointer to keep track of position in memory area*/

	while (n--) /* Loop through memory area for n times */
	{
		*ptr++ = b; /* Assign constant byte to pointer position */
	}
	return (s);
}
