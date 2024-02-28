#include "main.h"
/**
 * rev_string - a function that reverses a string
 *
 * @s: pointer to a string to be reversed
 *
 */
void rev_string(char *s)
{
	/* Calculate length of string */
	int length = 0; 

	while (s[length] != '\0')
	{
		length++;
		s++;
	}

	s-= length; /*reset pointer to beginning of string */
	
	/* Initialize start and end point of string */
	int start = 0;
	int end = length - 1;

	/* Swap start and end charcters */
	while (start < end)
	{
		char temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		/* Move towads center of string */
		start++;
		end--;
	}
}
