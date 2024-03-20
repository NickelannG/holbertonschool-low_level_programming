#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - a function that selects the correct function to perform an
 * operation asked by the user
 *
 * @s: a pointer to the operator passed as argument ot the program
 *
 * Return: a pointer to the function that corresponds to the operator
 * given as a parameter, or NULL if s doesn't match any of the
 * 5 expected operators
 */
int (*get_op_func(char *s))(int, int)
{
	/* Define array of structs */
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op)
	{
		/**
		 * check if operator matches one passed as an argument
		 * and if the string ends after this character
		 */
		if (*(ops[i].op) == *s && *(s + 1) == '\0')
		{
			return (ops[i].f); /* return corresponding function */
		}
		i++;
	}
	return (NULL);
}
