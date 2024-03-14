#include "dog.h"
#include <stdio.h>
/**
 * init_dog - a function that initializes a variable of type struct dog
 *
 * @d: a pointer to structure dog
 * @name: a pointer to a character array representing dog's name
 * @age: a floating-point value to represent dog's age
 * @owner: a pointer to a character array representing dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
