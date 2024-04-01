#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_list - prints all the elemtns of a linked list list_t
 *
 * @h: a pointer to the start of the linked list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
	       node++;
	       h = h->next;
	}
	return (node);
}
