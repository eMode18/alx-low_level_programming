#include "main.h"
/**
 * more_numbers - function to print 10 times the number from 0-14
 * _putchar only 3 times
 * Return: 0-14 10 times
 */
void more_numbers(void)
{
	int i, ro;

	for (ro = 0; ro <= 10; ro++)
	{
		for (i = 0; i <= 15; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
