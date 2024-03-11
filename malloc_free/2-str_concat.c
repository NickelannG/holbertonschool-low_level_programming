#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - a function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string which will be concatenated at the end of s1
 *
 * Return: NULL if there is a fail,
 * otherwise the pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1, len2, total;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	total = len1 + len2 + 1;

	concat = (char *)malloc(total * sizeof(char));


	if (concat == NULL)
	{
		return (NULL);
	}

	strcpy(concat, s1);

	strcat(concat, s2);

	return (concat);
}
