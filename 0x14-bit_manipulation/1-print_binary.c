#include "main.h"

/**
 * print_binary - print the value of a decimal in binary
 * @n: input value
 */
void print_binary(unsigned long int n)
{
	int q, track = 0;
	unsigned long int curr;

	for (q = 63; q >= 0; q--)
	{
		curr = n >> q;

		if (curr & 1)
		{
			_putchar('1');
			track++;
		}
		else if (track)
			_putchar('0');
	}
	if (!track)
		_putchar('0');
}

