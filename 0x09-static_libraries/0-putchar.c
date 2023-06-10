#include <unistd.h>
/**
 * _putchar - output char c to stdout
 * @c: character to output
 * Return: 1 if successful
 * On error, return -1 and set errno appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

