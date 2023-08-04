#include "main.h"

/**
 * set_bit - set specified index's bit value to 1
 * @n: pointer to the value to change
 * @index: index of target bit 1
 *
 * Return: Success 1, on failure -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

