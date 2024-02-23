#include "main.h"
/**
 * main - prints the alphabet in lowercase
 * followed by a new line
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char letter = 'a';
	{
		do {
			_putchar(letter);
			letter++;
		} while (letter <= 'z');
		_putchar('\n');
	}
	return (0);
}
