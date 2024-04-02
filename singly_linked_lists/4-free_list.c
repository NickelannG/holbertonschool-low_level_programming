#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * free_list - frees a linked list list_t
 *
 * @head: a pointer to a pointer to the head of the linked list
 */
void free_list(list_t *head)
{
	list_t *temp;
	list_t *current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp->str);
		free(temp);
	}
}
