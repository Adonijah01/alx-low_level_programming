#include <stdlib.h>
#include <string.h>

char *_strdup(char *str)
{
    if (str == NULL) {
        return NULL;
    }

    char *copy = malloc(strlen(str) + 1);

    if (copy == NULL) {
        return NULL;
    }

    strcpy(copy, str);

    return copy;
}

