#include "main.h"

int my_sqrt_recursion(int n, int m);
/**
 * _sqrt_recursion - find the squareroot
 * @n: operand
 * Return: the value of sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (my_sqrt_recursion(n, 0));
}
/**
 * my_sqrt_recursion - find the
 * square root of a number
 * @n: operand
 * @m: itarator
 * Return: square root
 */
int my_sqrt_recursion(int n, int m)
{
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);
	return (my_sqrt_recursion(n, m + 1));
}
