#include "main.h"

int my_assistant(char *s, int n, int length);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if palindrome
 * @s: string input
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (my_assistant(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - return string length
 * @s: string input
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * my_assistant - checks the characters recursively for palindrome
 * @s: string input
 * @n: iterator
 * @length: string length
 * Return: 1 if palindrome, 0 if not
 */
int my_assistant(char *s, int n, int length)
{
	if (*(s + n) != *(s + length - 1))
		return (0);
	if (n >= length)
		return (1);
	return (my_assistant(s, n + 1, length - 1));
}
