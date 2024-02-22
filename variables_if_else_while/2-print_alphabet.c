#include <stdio.h>
/**
 * Main - prints the alphabet in lowercase followed by a new line
 *
 * Return: always 0
 */
int main(void)
{
	for (int letter = 'a'; letter <= 'z'; ++letter)
	{
		putchar(letter);
	}
	putchar ('\n');
	return (0);
}
