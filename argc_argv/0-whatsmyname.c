#include "main.h"
/**
 * main - prints program name, followed by a new line
 *
 * @argc: number of command line arguments
 * @argv: array of pointers to the strings in the command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		char *arg = argv[i];

		while (*arg != '\0')
		{
			_putchar(*arg);
			arg++;
		}
		_putchar('\n');
	}
	return (0);
}
