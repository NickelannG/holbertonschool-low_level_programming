#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * add_dnodeint_end - adds a new node at the end of a dlistin_t list
 *
 * @head: a pointer to a pointer to the start of dlistint_t
 * @n: an int value to be store in the new node
 *
 *
 * Return: the address of the new element or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *head;

	new_node = malloc(sizeof(new_node));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL; /* Sets new node as last node */

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (current != NULL && current->next != NULL)
			current = current->next;

		current->next = new_node;
		new_node->prev = current;
	}
	return (new_node);
}
