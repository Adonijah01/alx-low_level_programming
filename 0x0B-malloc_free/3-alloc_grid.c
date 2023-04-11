#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array of integers with the given width and height
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: a pointer to the newly created 2D array, or NULL if an error occurs
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    if (width <= 0 || height <= 0)
        return (NULL);

    grid = malloc(height * sizeof(int *));
    if (grid == NULL)
        return (NULL);

    for (i = 0; i < height; i++)
    {
        grid[i] = malloc(width * sizeof(int));
        if (grid[i] == NULL)
        {
            /* free all previously allocated memory and return NULL */
            for (j = 0; j < i; j++)
                free(grid[j]);
            free(grid);
            return (NULL);
        }
        /* initialize all elements to 0 */
        for (j = 0; j < width; j++)
            grid[i][j] = 0;
    }

    return (grid);
}

