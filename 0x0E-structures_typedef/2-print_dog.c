#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function to print struct dog
 * @d: struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("name: %s\nage: %f\nowner: %s\n", d->name, d->age, d->owner);
}

