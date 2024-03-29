#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string
 *
 * @str: string to be modified
 *
 * Return: modified string
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		/* Check for separators */
		if ((i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' ||
		str[i - 1] == '\n' || str[i - 1] == ',' || str[i - 1] == ';'
		|| str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?'
		|| str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')'
		|| str[i - 1] == '{' || str[i - 1] == '}')
		&& (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32; /* Convert to upper */
		}
		i++;
	}

	return (str);
}
