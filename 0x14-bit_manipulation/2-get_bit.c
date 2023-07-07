#include "main.h"

/**
 * get_bit - return bit value at a specified index in
 * a decimal value
 * @n: number to locate
 * @index: bit index
 *
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int my_bit;

	if (index > 63)
		return (-1);

	my_bit = (n >> index) & 1;

	return (my_bit);
}

