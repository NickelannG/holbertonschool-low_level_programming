#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for an array, using malloc
 *
 * @nmemb: number of elements in the array
 * @size: bytes per element of the array
 *
 * Return: a pointer to the allocated memory where the array will be stored,
 * or NULL is nmemb or size is 0, or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int total;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;

	p = malloc(total);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
		*((char *) p + i) = 0; /* Dereferencing pointer */

	return (p);
}
