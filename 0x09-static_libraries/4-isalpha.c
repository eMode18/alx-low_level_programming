#include "main.h"

/**
 * _isalpha - check for an alphabet
 * @c: input to be checked
 * Return: If c is a letter return 1, else return 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

