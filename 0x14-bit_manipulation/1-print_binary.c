#include "main.h"

/**
 * print_binary - return binary number for the given
 * decimal value
 * @n: resulting binary
 */
void print_binary(unsigned long int n)
{
	int k, start = 0;
	unsigned long int new;

	for (k = 63; k >= 0; k--)
	{
		new = n >> k;

		if (new & 1)
		{
			_putchar('1');
			start++;
		}
		else if (start)
			_putchar('0');
	}
	if (!start)
		_putchar('0');
}

