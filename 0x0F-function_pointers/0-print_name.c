#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - use function pointer to print the name
 * @name: string value
 * @f: function pointer
 * Return: void
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

