#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print string then newline
 * @separator: string to separate strings
 * @n: string function params
 * @...: var number of strings.
 * Description: do not print NULL separator
 *              If string is NULL pront nil
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list letters;
	char *str;
	unsigned int pos;

	va_start(letters, n);

	for (pos = 0; pos < n; pos++)
	{
		str = va_arg(letters, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (pos != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(letters);
}

