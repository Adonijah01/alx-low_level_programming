#include "main.h"

/**
 * Adonijiah Kiplimo
 * sqrt_recurse - Recursively compute the square root of a number.
 *
 * @n: The number whose square root to compute.
 * @m: The current guess for the square root.
 *
 * Return: The natural square root of n if it exists, or -1 if it does not.
 */
int sqrt_recurse(int n, int m)
{
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);
	return (sqrt_recurse(n, m + 1));
}

/**
 * _sqrt_recursion - Compute the natural square root of number using recursion
 *
 * @n: The number whose square root to compute.
 *
 * Return: The natural square root of n if it exists, or -1 if it does not.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_recurse(n, 0));
}

