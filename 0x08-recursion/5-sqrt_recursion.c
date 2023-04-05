#include "main.h"

/**
 * @adonijah Kiplimo
 * sqrt_recurse - Recurse the possible root values.
 * @n: The value to find the root of.
 * @m: The guess value.
 *
 * Return: The natural root, or -1 if there is none.
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
 * _sqrt_recursion - Get the natural square root of a number.
 * @n: The number to get the square root of.
 *
 * Return: The square root, or -1 if none.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_recurse(n, 0));
}

