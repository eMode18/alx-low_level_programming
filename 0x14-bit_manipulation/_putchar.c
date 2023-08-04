#include "main.h"
#include <unistd.h>

/**
 * _putchar - Sends a character to the standard output (stdout).
 * @c: The character to be printed.
 *
 * Return: On success, the function returns 1.
 *	On error, the function should return -1, and set errno appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

