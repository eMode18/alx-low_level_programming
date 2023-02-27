#include "main.h"
/**
 * print_rev - print reverse
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int longInt = 0;
	int o;

	while (*s != '\0')
	{
		longInt++;
		s++;
	}
	s--;
	for (o = longInt; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
