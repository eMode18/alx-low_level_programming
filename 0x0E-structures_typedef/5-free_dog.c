#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - release memory allocated to the dog struct
 * @d: struct to free
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

