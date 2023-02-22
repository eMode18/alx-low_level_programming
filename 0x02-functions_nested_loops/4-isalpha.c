#include "main.h"

/**
 * _islower - checks for alphabet characters
 * @c: the character to be evaluated
 * Return: 1 if c is an alphabet, else 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
