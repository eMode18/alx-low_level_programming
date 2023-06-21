#include "3-calc.h"

int op_sub(int a, int b);
int op_mul(int a, int b);
int op_mod(int a, int b);
int op_add(int a, int b);
int op_div(int a, int b);
/**
 * op_add - addition of two nums
 * @a: num1
 * @b: num2
 * Return: addition of num1 and num2
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract two numbers
 * @a: num1
 * @b: num2
 * Return: num1 - num2.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply two digits
 * @a: num1
 * @b: num2
 * Return: a multiplied by b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two numbers.
 * @a: num1
 * @b: num2
 * Return: result of a/b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - divide two numbers.
 * @a: num1
 * @b: num2
 * Return: remainder of a/b
 */

int op_mod(int a, int b)
{
	return (a % b);
}

