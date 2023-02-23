#include "main.h"
/**
 * _isdigit - function to check for a digit value between 0-9
 * @c: value to check
 * Return: 1 if c is digit and 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
