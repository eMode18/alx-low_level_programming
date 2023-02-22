#include "main.h"

/**
 * _islapha - checks for alphabet characters
 * @c: the character to be evaluated
 * Return: 1 if c is an alphabet, else 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
