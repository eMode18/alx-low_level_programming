#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - loop through array while printing each element
 * on a new line
 * @array: array
 * @size: array length
 * @action: pointer
 * Return: no value
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
		return;

	for (k = 0; k < size; k++)
	{
		action(array[k]);
	}
}

