#include "main.h"

/**
 * flip_bits - calculate the number of bits to be changed
 * from one value to the other
 * @n: starting number
 * @m: next number
 *
 * Return: total bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, init = 0;
	unsigned long int next;
	unsigned long int specs = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		next = specs >> i;
		if (next & 1)
			init++;
	}

	return (init);
}

