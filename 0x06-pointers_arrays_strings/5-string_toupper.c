#include "main.h"

/**
 * string_toupper - changes lowercase letteres to caps
 * @str: string to be changes
 * Return: pointer to the changed string
 */
char *_string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
