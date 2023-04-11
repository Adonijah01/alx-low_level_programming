#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to duplicate.
 *
 * Return: pointer to duplicated string, or NULL if insufficient memory
 * was available.
 */
char *_strdup(char *str)
{
    int i, len;
    char *dup_str;

    if (str == NULL)
        return (NULL);

    len = 0;
    while (str[len] != '\0')
        len++;

    dup_str = malloc(sizeof(char) * (len + 1));
    if (dup_str == NULL)
        return (NULL);

    for (i = 0; i <= len; i++)
        dup_str[i] = str[i];

    return (dup_str);
}
