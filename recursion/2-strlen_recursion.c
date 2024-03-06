#include "main.h"
/**
 * _strlen_recursion - a function that prints the length of a string
 *
 * @s: a pointer to a string
 *
 * Return: Always 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0') /* Base case */
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1)); /* Recursive case */
}
