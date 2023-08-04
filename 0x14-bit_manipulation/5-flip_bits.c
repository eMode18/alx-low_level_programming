#include "main.h"

/**
 * flip_bits - enumerate the bits to alter
 * from one number to another number
 * @n: num1
 * @m: num2
 *
 * Return: bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int q, tally = 0;
	unsigned long int curr;
	unsigned long int preview = n ^ m;

	for (q = 63; q >= 0; q--)
	{
		curr = preview >> q;
		if (curr & 1)
			tally++;
	}

	return (tally);
}

