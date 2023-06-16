#include "main.h"
#include <unistd.h>
/**
 * _putchar - output c to stdout
 * @c: char to output
 * Return: 1 if executed successfully.
 * On error, return -1 and set errno appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

