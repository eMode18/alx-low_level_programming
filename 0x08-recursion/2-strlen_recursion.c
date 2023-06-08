#include "main.h"
/**
 * _strlen_recursion - function to calculate string length
 * @s: string input
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int myInt = 0;

	if (*s)
	{
		myInt++;
		myInt += _strlen_recursion(s + 1);
	}

	return (myInt);
}
