#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: a pointer to a pointer to the head of the doubly linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;

		free(current);

		current = next_node;
	}
}
