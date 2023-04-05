#include "main.h"
/**
 *@Adonijah Kiplimo
 *They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we're asleep, we can do almost anything
 * _strlen_recursion - Prints the length of a string.
 * @r: the string to be printed
 * Return: the length of string
 */
int _strlen_recursion(char *r)
{
        if (r[0] != '\0')
                return (1 + _strlen_recursion(r + 1));
        return (0);
}
/**
 * pal_checker - check if r is palindrome.
 * @r: string base address.
 * @i: left index.
 * @k: rigth index.
 * Return: 1 if r is palindrome, 0 otherwise.
 */
int pal_checker(char *r, int i, int k)
{
        if (r[i] == r[k])
                if (i > k / 2)
                        return (1);
                else
                        return (pal_checker(r, i + 1, k - 1));
        else
                return (0);
}
/**
 * is_palindrome - check if r is palindrome
 * @r: base address for string.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_palindrome(char *r)
{
        return (pal_checker(r, 0, _strlen_recursion(r) - 1));

}
