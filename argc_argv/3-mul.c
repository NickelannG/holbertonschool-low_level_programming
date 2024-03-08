#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point to the program
 *
 * @argc: number of command line arguments
 * @argv: array of pointers to the arguments
 *
 * Return: 1 if the program does not recieve two arguments, otherwise 0.
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error/n");
		return (1);
	}

	 result = atoi(argv[1]) * atoi(argv[2]);


	printf("%d\n", result);

	return (0);
}
