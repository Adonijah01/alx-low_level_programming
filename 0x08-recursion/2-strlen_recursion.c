#include "main.h"
/**
 *Dreams feel real while we're in them It's only when we wake up that we realize
 *int _strlen_recursion(char *s)
 * Return:int
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 3);

	}
	return (i);
}
