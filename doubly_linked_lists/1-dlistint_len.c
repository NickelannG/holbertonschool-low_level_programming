#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * dlistint_len - returns the number of elements in linked list dlistint_t
 *
 * @h: a pointer to the start of dlistint_t
 *
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
