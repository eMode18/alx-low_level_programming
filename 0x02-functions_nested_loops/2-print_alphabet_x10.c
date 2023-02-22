#include "main.h"

/**
 * main - start here
 *
 * end with a newline
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i=0;

	while (i < 10)
	{
		ch = a;
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
