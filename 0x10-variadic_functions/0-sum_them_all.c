#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds all the parameters
 * @n: the number of params accepted by the function
 * @...: var parameters to be added
 * Return: 0 if n==0, else return sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sa;
	unsigned int k, total = 0;

	va_start(sa, n);

	for (k = 0; k < n; k++)
		total += va_arg(sa, int);

	va_end(sa);

	return (total);
}

