#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the char c to stdout
 * @c: character to print
 * Return: 1 if successful, -1 if there are any errors
 * set errno appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
