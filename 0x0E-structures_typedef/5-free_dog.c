#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the memory allocated to the struct dog
 * @d: struct dog type
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

