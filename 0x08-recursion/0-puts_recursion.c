#include "main.h"
/**
 * _puts_recursion - this is a function to print
 * a string that is followed by a new line.
 * @s: input
 * Return: function returns 0 if it executes successfully
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
