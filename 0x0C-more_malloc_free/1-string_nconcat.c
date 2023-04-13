#include <stdlib.h>
#include <string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int len1 = s1 ? strlen(s1) : 0;
    unsigned int len2 = s2 ? strlen(s2) : 0;
    char *result = malloc(len1 + (n < len2 ? n : len2) + 1);

    if (!result) {
        return NULL;
    }

    if (s1) {
        memcpy(result, s1, len1);
    }

    if (n >= len2) {
        n = len2;
    }

    memcpy(result + len1, s2, n);
    result[len1 + n] = '\0';

    return result;
}

