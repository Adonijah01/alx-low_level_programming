#include "main.h"
/**
 * Why is it so important to dream? Because, in my dreams we are together
 * void _print_rev_recursion
 * Return 0;
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 2);
		_putchar(*s);
	}
}
