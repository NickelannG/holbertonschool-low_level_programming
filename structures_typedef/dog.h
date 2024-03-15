#ifndef DOG_H
#define DOG_H

/**
 * struct dog - to show it's name, age and owner
 *
 * @name: a pointer to a character array representing dog's name
 * @age: a floating-point value to represent dog's age
 * @owner: a pointer to a character array representing do's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
