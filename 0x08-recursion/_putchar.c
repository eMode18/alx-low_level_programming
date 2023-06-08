#include "main.h"
#include <unistd.h>
/**
 * _putchar - function writes character (c) to stdout
 * @c: character to be printed to stdout
 * Return: 1 if executed successfully
 * On error return -1 and set errno accordigly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
