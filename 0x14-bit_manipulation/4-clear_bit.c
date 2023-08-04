#include "main.h"

/**
 * clear_bit - set specified bit's value to 0
 * @n: pointer to target bit
 * @index: position of bit to clear
 *
 * Return: Success 1, on failure -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

