#include "main.h"
#include <limits.h>
/**
 * _aoti - Function that converts a string to an integer
 *
 * @s: a pointer to the beginning of a string
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int i = 0; /* Array position */
	int n = 0; /* Current number without sign */
	int sign = 1; /* Sign of the number, initially positive */

	/* Skip leading non-digit characters and handle sign */
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		/* If a '-' is encountered, change sign to negative */
		if (s[i] == '-')
		{
			/* Multiply current sign by -1 to toggle between positive and negative */
			sign = sign * -1;
		}
		i = i + 1; /* Move to next character in string */
	}

	/* If the end of string is not reached and a digit is encountered */
	if (s[i] != '\0')
	{
		/* Parse the digits of the number */
		while (s[i] >= '0' && s[i] <= '9')
		{
			/* convert character to integer */
			n = n * 10 + (s[i] - '0');
			i = i + 1; /* Move to the next character */
		}
	}
	return (sign * n); /* return the parsed number with appropriate sign */
}
