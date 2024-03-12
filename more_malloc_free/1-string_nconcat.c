#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two string
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes we are allocating memory for
 *
 * Return: pointer to newly allocated sapce of concatenated string,
 * or NULL if failed.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	concat = malloc((len1 + n + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < n && s2[j] != '\0'; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);
}
