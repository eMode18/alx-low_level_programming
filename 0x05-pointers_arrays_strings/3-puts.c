#include "main.h"
/**
 * _puts - prints a tring that is followed by a new line 
 * @str: the string to be printed to stdout
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
