#include "main.h"
/**
 * _strlen - return string length
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int myLen = 0;

	while (*s != '\0')
	{
		myLen++;
		s++;
	}

	return (myLen);
}

