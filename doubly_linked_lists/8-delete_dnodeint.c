#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given position
 *
 * @head: a pointer to a pointer to the head of the dlistint_t
 * @index: the index of the list where the node that is to be deleted is
 *
 * Return: 1 if suceeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	if (i != index || *head == NULL)
		return (-1);

	if (i == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
	}
	else /* Means i == index */
	{
		current->prev->next = current->next;
		if (current->next != NULL)
			current->next->prev = current->prev;
	}
	free(current);
	return (1);
}
