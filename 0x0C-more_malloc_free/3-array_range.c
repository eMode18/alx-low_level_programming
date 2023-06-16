#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creat int array
 * @min: min range of stored values
 * @max: max range of stored values
 * Return: new array pointer
 */
int *array_range(int min, int max)
{
	int *mem;
	int k, range;

	if (min > max)
		return (NULL);

	range = max - min + 1;

	mem = malloc(sizeof(int) * range);

	if (mem == NULL)
		return (NULL);

	for (k = 0; min <= max; k++)
		mem[k] = min++;

	return (mem);
}

