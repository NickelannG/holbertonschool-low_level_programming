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

	if (*head == NULL)
		return (-1);
	/* If index is the head */
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	while (current != NULL && i < index - 1)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (-1);

	if (current->next != NULL)
		current->next->prev = current->prev;
	if (current->prev != NULL)
		current->prev->next = current->next;
	else
		*head = current->next;

	free(current);
	return (1);
}
