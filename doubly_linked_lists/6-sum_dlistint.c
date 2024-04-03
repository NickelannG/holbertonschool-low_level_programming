#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a
 *  dlistint_t linked list
 *
 *  @head: a pointer to the beginning of the dlistint_t linked list
 *
 *  Return: the sum of all the data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);

	if (head == NULL)
		return (0);
}
