#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string input
 * Return: length
 */
int _strlen(char *s)
{
	int longInt = 0;

	while (*s != '\0')
	{
		longInt++;
		s++;
	}

	return (longInt);
}
