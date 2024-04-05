#include "main.h"

/**
 * int binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: a pointer to a string of 0 and 1 chars
 *
 * Return: 0 of b is NULL or if one or more chars in b is not a 1 or a 0, 
 * otherwise the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		else
		{
			sum = sum*2 + (b[i] - '0');
			i++;
		}
	}
	return (sum);
}
