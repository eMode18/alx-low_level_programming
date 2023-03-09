#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c - character to be printed
 * Return: 1 on success
 * and -1 if there are errors, then set errno accordingly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
