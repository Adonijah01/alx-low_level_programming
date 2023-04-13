#include <stdlib.h>
/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
    int *arr;
    int i, len;

    if (min > max)
        return (NULL);

    len = max - min + 1;
    arr = malloc(sizeof(int) * len);
    if (arr == NULL)
        return (NULL);

    for (i = 0; i < len; i++)
        arr[i] = min + i;

    return (arr);
}

