#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a linked list list_t
 *
 * @head: a pointer to a pointer to the head of the linked list
 * @str: a pointer to a string to be duplicated and stored into the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t length = 0;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(new_node));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Calculate length of string */
	while (str[length] != '\0')
		length++;

	new_node->len = length;

	new_node->next = *head;

	*head = new_node;

	return (*head);
}

/**
 * free_list - dellocate memory for new node place at the
 * beginning of linked list
 *
 * @head: a pointer to the head of the linked list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
