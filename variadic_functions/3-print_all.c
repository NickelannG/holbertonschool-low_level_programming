#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/**
 * print_char - a function that prints characters
 *
 * @args: the character to be printed
 *
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - a function that prints an integer
 *
 * @args: the integer to be printed
 *
 */
void print_int(va_list args)
{
	printf("%i", va_arg(args, int));
}

/**
 * print_float - a function that prints a float
 *
 * @args: the float to be printed
 *
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - a function that prints a string
 *
 * @args: the string to be printed
 *
 */
void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	str == NULL ? printf("(nil)") : printf("%s", str);
}
/**
 * print_all - a function that prints anything
 *
 * @format: list of argument types to be passed
 *
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int j;
	va_list args;

	formatchecker check[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
	};
	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *check[j].format)
			{
				check[j].func(args);
				if (format[i + 1] != '\0' &&
					(format[i] == 'c' || format[i] == 'i' ||
					format[i] == 'f' || format[i] == 's'))
					printf(", ");
			}
			j++;

		}
		i++;
	}
	printf("\n");
	va_end(args);
}
