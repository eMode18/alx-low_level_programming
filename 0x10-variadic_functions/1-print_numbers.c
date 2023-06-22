#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print a new line after printing numbers
 * @separator: separate string
 * @n: int params for the function
 * @...: variable to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list digits;
	unsigned int i;

	va_start(digits, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(digits);
}

