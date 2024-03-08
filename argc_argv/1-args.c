#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * @argc: number of command line arguments
 * @argv: array of pointers to the arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
