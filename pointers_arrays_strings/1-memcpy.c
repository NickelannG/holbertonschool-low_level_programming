#include "main.h"
/**
 * _memcpy - a function that copies memory area
 *
 * @dest: Pointer to memory area to be copied into
 * @src: Pointer to memory area to be copied
 * @n: Number of bytes to be copied
 *
 * Return: pointer to modified dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr_dest = dest;
	char *ptr_src = src;

	while (n--)
	{
		*ptr_dest++ = *ptr_src++; /* Copy byte from src to dest */
	}
	return (dest);
}
