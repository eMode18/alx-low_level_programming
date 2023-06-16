#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - malloc is used to allocate memory
 * @b: memory size to be allocated in bytes
 * Return: allocated memory pointer
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}

