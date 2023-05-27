#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - sets a variable
 * @d: pointer
 * @name: name od struct dog
 * @age: age
 * @owner: owner to the struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

