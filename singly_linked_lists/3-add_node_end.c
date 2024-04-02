#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the tail of a linked list list_t
 *
 * @head: a pointer to a pointer to the head of the linked list
 * @str: a pointer to a string to be duplicated and stored into the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current = *head;
	size_t length = 0;

	if (str == NULL)
		return (NULL);

	/* Transverse to last node */
	while (current != NULL && current->next != NULL)
		current = current->next; /* Move to next node */

	new_node = malloc(sizeof(new_node));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[length] != '\0')
		length++;

	new_node->len = length;

	/* Setting the new node to head if list is empty */
	if (*head == NULL)
		*head = new_node;

	/* Setting next pointer of last node to point to new node */
	else
		current->next = new_node;

	return (new_node);

}
