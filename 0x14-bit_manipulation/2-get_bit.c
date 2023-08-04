#include "main.h"

/**
 * get_bit - query index, then return bit value in decimal
 * @n: number to query
 * @index: bit index
 *
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int _bit;

	if (index > 63)
		return (-1);

	_bit = (n >> index) & 1;

	return (_bit);
}

