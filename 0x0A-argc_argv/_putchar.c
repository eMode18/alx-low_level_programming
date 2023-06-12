#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c char to print
 * Return:1 on successful execution
 * On error,return -1 and set errno accordingly
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

