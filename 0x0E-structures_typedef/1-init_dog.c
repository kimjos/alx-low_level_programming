#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a dog structure
 * @d: dog pointer
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
