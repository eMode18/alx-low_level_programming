#include "main.h"

/**
 * clear_bit - set specified bit value to 0
 * @n: pointer to value to be changed
 * @index: specified index
 *
 * Return: 1 on success, else, return -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

