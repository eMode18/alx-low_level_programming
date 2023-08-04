#include "main.h"

/**
 * binary_to_uint - Converts a binary number represented
 *	as a string to an unsigned integer.
 * @b: Pointer to the string containing the binary number.
 *
 * Return: The converted unsigned integer.
 */
unsigned int binary_to_uint(const char *b)
{
	int q;
	unsigned int declare_num = 0;

	if (!b)
		return (0);

	for (q = 0; b[q]; q++)
	{
		if (b[q] < '0' || b[q] > '1')
			return (0);
		declare_num = 2 * declare_num + (b[q] - '0');
	}

	return (declare_num);
}

