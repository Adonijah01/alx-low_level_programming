#include "main.h"

/**
 * wildcmp - Compares two strings and returns 1 if they are identical,
 *           otherwise returns 0. The second string can contain the
 *           wildcard character '*'.
 *
 * @s1: The first string to compare.
 * @s2: The second string to compare, which may contain '*'.
 *
 * Return: 1 if the strings are identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
        /* Base case: both strings are empty */
        if (*s1 == '\0' && *s2 == '\0')
                return 1;

        /* If the current characters match or s2 has a wildcard */
        if (*s1 == *s2 || *s2 == '*')
        {
                /* If the wildcard represents an empty string */
                if (*s2 == '*' && *(s2 + 1) == '\0')
                        return 1;

                /* Recursively compare the rest of the strings */
                if (wildcmp(s1 + 1, s2 + 1) == 1)
                        return 1;
                if (*s2 == '*' && wildcmp(s1, s2 + 1) == 1)
                        return 1;
        }

        /* No match found */
        return 0;
}


