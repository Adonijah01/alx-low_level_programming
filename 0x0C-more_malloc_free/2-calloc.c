#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *_calloc(unsigned int nmemb, unsigned int size);

int main()
{
    char *buffer = _calloc(10, sizeof(char));
    strcpy(buffer, "Hello");
    printf("%s\n", buffer);
    free(buffer);
    return 0;
}

