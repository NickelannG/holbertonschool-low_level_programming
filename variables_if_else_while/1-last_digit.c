#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a program that prints the last digit of a random number that is
 * stored in the variable n followed by a newline
 *
 * Return: always 0
 */
int main(void)
{
	int n, last_digit;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	printf("Last digit of %d is ", n);
	if (last_digit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf("and is 0\n");
	}
	else
        {
                printf("and is less than 6 and not 0\n");
        }
	return (0);
}
