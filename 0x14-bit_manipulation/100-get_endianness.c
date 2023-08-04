#include "main.h"

/**
 * get_endianness - check machine endian size(big/small)
 * Return: If big 0, small 1
 */
int get_endianness(void)
{
	unsigned int t = 1;
	char *n = (char *) &t;

	return (*n);
}

