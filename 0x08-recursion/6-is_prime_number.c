#include "main.h"

int my_prime(int n, int m);

/**
 * is_prime_number - evaluates whether an int is a prime number
 * @n: number to be checked
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (my_prime(n, n - 1));
}

/**
 * my_prime - evaluate if the number is a prime through recursion
 * @n: number to check
 * @m: iterator
 */
int my_prime(int n, int m)
{
	if (m == 1)
		return (1);
	if (n % m == 0 && m > 0)
		return (0);
	return (actual_prime(n, m - 1));
}
