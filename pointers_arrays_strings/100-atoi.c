#include "main.h"
#include <limits.h>
/**
 * _atoi - Function that converts a string to an integer
 *
 * @s: a pointer to the beginning of a string
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int ii = 0, num = 0;
	int start = -1;
	int end = -1;
	int mult = 1;

	while (start < 0)
	{
		if (s[ii] == 0)
			return (0);
		if (s[ii] >= 48 && s[ii] <= 57)
			start = ii;
		else
			ii += 1;
	}
	while (end < 0)
	{
		if (s[ii] < 48 || s[ii] > 57)
			end = ii - 1;
		else
			ii += 1;
	}
	for (ii = start - 1 ; ii >= 0 ; ii--)
	{
		if (s[ii] == 45)
			mult = mult * (-1);
	}
	for (ii = end ; ii >= start ; ii--)
	{
		num += (s[ii] - 48) * mult;
		if (ii != start)
			mult *= 10;
	}

	return (num);
}
