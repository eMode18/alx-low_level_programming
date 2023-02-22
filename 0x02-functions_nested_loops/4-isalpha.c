#include "main.h"

/**
 * _isalpha - checks for alphabet characters
 * @c: the character to be evaluated
 * Return: 1 if c is an alphabet, else 0
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
