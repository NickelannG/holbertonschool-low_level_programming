#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 *
 * @argc: number of command line arguments
 * @argv: array of pointers to the arguments
 *
 * Return: 1, if the one of the numbers contains symbols that are not digits
 * , otherwise 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int j = 0;

		while (argv[i][j] < 48 || argv[i][j] > 57)
		{
			if (argv[i][j] != '\0')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
