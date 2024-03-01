#include "main.h"
/**
 * _strcpy - a function that copies the contents of one string to another,
 * including the terminatin null byte
 *
 * @src: a pointer to a string which will be copied into another string
 *
 * @dest: a pointer to a buffer which the first string will be copied into
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest; /* Store the starrting address of dest */

	/* Copy contents of src until null terminator is encountered */
	while ((*dest++ = *src++) != '\0')
		; /* Ensures that return is executed after the loop */
		return (start); /* Return starting address fo dest */
}
