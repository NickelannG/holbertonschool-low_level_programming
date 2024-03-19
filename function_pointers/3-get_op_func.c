#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - a function that selects the correct function to perform an
 * operation asked by the user
 *
 * @s: a pointer to the operator passed as argument ot the program
 *
 * Return: a pointer to the function that corresponds to the operator
 * given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
