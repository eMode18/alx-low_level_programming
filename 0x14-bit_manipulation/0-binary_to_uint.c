#include "main.h"

/**
 * binary_to_uint - perform conversion from binary to
 * unsigned int
 * @b: string value
 *
 * Return: resulting number
 */
unsigned int binary_to_uint(const char *b)
{
	int d;
	unsigned int unit = 0;

	if (!b)
		return (0);

	for (d = 0; b[d]; d++)
	{
		if (b[d] < '0' || b[d] > '1')
			return (0);
		unit = 2 * unit + (b[d] - '0');
	}

	return (unit);
}

