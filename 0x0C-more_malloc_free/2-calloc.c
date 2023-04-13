#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array of @nmemb elements of
 * @size bytes each and returns a pointer to the allocated memory.
 *
 * @nmemb: allocate memory for array
 * @size: allocate element of size bytes
 *
 * Return: pointer to the allocated memory.
 */




void *_calloc(unsigned int nmemb, unsigned int size);

int main()
{
    char *buffer = _calloc(10, sizeof(char));
    strcpy(buffer, "Hello");
    printf("%s\n", buffer);
    free(buffer);
    return 0;
}

