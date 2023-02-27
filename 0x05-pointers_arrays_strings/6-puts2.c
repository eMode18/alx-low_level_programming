#include "main.h"
/**
 * puts2 - function which prints a single character as opposed to two
 * starting from the first character
 * @str: input string
 * Return: print
 */
void puts2(char *str)
{
	int longInt = 0;
	int b = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longInt+;
	}
	b = longInt -1;
	for (o = 0; o <=b; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[0]);
		}
	}
	_putchar('\n');
}
