#include "main.h"

/**
 *@Adonijah Kiplimo
 * check_divisibility - checks if n is divisible by any number less than y
 * @n: the number to check for divisibility
 * @y: the divisor
 *
 * Return: 1 if n is divisible by x, otherwise 0
 */
int check_divisibility(int n, int y)
{
    if (y == 1)
        return (1);
    if (n % y == 0)
        return (0);
    return (check_divisibility(n, y - 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
    if (n <= 1)
        return (0);
    return (check_divisibility(n, n - 1));



}

