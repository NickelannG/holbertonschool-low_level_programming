#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - a function that creates a new dog
 *
 * @name: a pointer to a character array representing dog's name
 * @age: a floating-point value to represent dog's age
 * @owner: a pointer to a character array representing dog's owner
 *
 * Return: new dog, or NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int namelength = 0;
	int ownerlength = 0;
	char *namedup, *ownerdup;
	int i, j;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	while (name[namelength] != '\0')
		namelength++;

	while (owner[ownerlength] != '\0')
		ownerlength++;

	namedup = malloc(namelength + 1);
	ownerdup = malloc(ownerlength + 1);

	if (namedup == NULL || ownerdup == NULL)
	{
		free(new_dog);
		free(namedup);
		free(ownerdup);
		return (NULL);
	}
	for (i = 0; i <= namelength; i++)
		namedup[i] = name[i];

	for (j = 0; j <= ownerlength; j++)
		ownerdup[j] = owner[j];

	new_dog->name = namedup;
	new_dog->age = age;
	new_dog->owner = ownerdup;

	return (new_dog);
}
