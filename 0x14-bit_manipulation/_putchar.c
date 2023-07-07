
#include "main.h"
#include <unistd.h>
/**
 * _putchar - write char c to stdout
 * @c: char value to print
 *
 * Return: If successful, return 1, else return -1
 * and set errno accordingly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

