#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 *  @h: a pointer to a pointer to the head of the dlistint_t
 *  @idx: the index of the list where the new node will be added
 *  @n: the int value to be stored in the new node
 *
 *  Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new_node;
	unsigned int i = 0;

	/* if idx is the head */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* if idx is the tail */
	if (*h == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(new_node));

	if (new_node == NULL)
		return (NULL);

	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = current->next;
	new_node->prev = current;

	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
