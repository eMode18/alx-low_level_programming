#include "main.h"

/**
 * print_binary - return binary number for the given
 * decimal value
 * @n: resulting binary
 */
void print_binary(unsigned long int n)
{
	int i, start = 0;
	unsigned long int new;

	for (i = 63; i >= 0; i--)
	{
		new = n >> i;

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

