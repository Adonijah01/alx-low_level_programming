#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char.
 * @size: the size of the array
 * @c: the char to initialize the array with
 *
 * Return: NULL if size = 0 or if the memory allocation fails,
 *         otherwise returns a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
    char *arr;
    unsigned int i;

    if (size == 0)
        return (NULL);

    arr = malloc(sizeof(char) * size);

    if (arr == NULL)
        return (NULL);

    for (i = 0; i < size; i++)
        arr[i] = c;

    return (arr);
}
