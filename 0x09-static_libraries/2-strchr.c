#include "main.h"
#include <stddef.h>

/**
 * _strchr - starting point
 * @s: input
 * @c: input
 * Return: 0 if successful
 */
char *_strchr(char *s, char c)
{
	int n = 0;

	for (; s[n] >= '\0'; n++)
	{
		if (s[n] == c)
			return (&s[n]);
	}
	return (0);
}

