#include "main.h"
/**
 * _puts - print string + newline to stdout
 * @str: string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}

