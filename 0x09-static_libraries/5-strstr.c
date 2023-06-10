#include "main.h"
/**
 * _strstr - starting point
 * @haystack: input
 * @needle: input
 * Return: 0 on success
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *k = haystack;
		char *i = needle;

		while (*k == *i && *i != '\0')
		{
			k++;
			i++;
		}

		if (*i == '\0')
			return (haystack);
	}

	return (0);
}

