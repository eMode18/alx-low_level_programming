#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to be output
 * Return: 1 if successful
 * On error: return -1 and set errno accordingly
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
