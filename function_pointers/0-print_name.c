#include "function_pointers.h"
#include <stdio.h>
#include <stdio.h>
/**
 * print_name - a function that prints a name
 *
 * @name: the name
 * @f: a pointer to a function that prints the name
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
