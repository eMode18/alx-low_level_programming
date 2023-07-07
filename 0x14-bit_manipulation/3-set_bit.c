#include "main.h"

/**
 * set_bit - make the bit at specifed index 1
 * @n: pointer to the value to be chnaged
 * @index: bit index that the value is set to 1
 *
 * Return: 1 on success, else return -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

