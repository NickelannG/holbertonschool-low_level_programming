#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node of a
 * dlistint_t linked list
 *
 * @head: a pointer to the head of the dlistint_t list
 * @index: the index of the node started from 0
 *
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (NULL);

	return (current);
}
