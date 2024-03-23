#ifndef VARIADICFUNCTIONS_H
#define VARIADICFUNCTIONS_H

#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct formatchecker - structure used to match data type with
 * corresponding function
 *
 * @format : format specifier
 * @func: pointer to the corresponding printing function
 */

typedef struct formatchecker
{
	const char *format;
	void (*func)(va_list);
} formatchecker;

void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);

#endif
