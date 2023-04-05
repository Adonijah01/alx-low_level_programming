#include "main.h"

/**
 * str_len_recursion - Computes the length of a string recursively.
 * @str: the string whose length is to be computed.
 * Return: the length of the string.
 */
int str_len_recursion(char *str)
{
	if (str[0] != '\0')
		return (1 + str_len_recursion(str + 1));
	return (0);
}

/**
 * is_palindrome - Checks if a given string is a palindrome.
 * @str: the string to be checked.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *str)
{
	int i = 0, j = str_len_recursion(str) - 1;

	while (i < j)
	{
		if (str[i] != str[j])
			return (0);
		i++;
		j--;
	}
	return (1);
}

