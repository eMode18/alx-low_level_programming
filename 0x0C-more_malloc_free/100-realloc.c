#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - memory reallocation using free and malloc
 * @ptr: pointer to initial mem
 * @old_size: size of initial mem
 * @new_size: size of reallocated mem
 * Return: reallocated mem pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *mem1;
	char *old_mem;
	unsigned int k;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	mem1 = malloc(new_size);
	if (!mem1)
		return (NULL);

	old_mem = ptr;

	if (new_size < old_size)
	{
		for (k = 0; k < new_size; k++)
			mem1[k] = old_mem[k];
	}

	if (new_size > old_size)
	{
		for (k = 0; k < old_size; k++)
			mem1[k] = old_mem[k];
	}

	free(ptr);
	return (mem1);
}

