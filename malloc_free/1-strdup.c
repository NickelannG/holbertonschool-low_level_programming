#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - a function that retunr a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter
 *
 * @str: a pointer to a string we are copying
 *
 * Return: NULL is str is NULL or if there is insufficient memory,
 * otherwise a pointer to the duplicated string of str
 */
char *_strdup(char *str)
{
	int i;
	int length = 0;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}
	return (duplicate);
}
