#include "main.h"
/**
 * print_numbers - function to print values from 0 - 9
 *
 * Return: 0-9 followed by a newline
 */
void print_numbers(void)
{
	for (i = 0; i < 9; i++)
	{
		_putchar(i + '0');
		_putchar('\n');
	}
}
