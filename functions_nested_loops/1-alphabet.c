#include "main.h"
/**
 * main - prints the alphabet in lowercase
 * followed by a new line
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
