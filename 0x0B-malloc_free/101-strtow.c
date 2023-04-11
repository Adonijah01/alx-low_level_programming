#include "main.h"
#include <stdlib.h>

int count_words(char *str);
int get_word_length(char *str);
char **free_words(char **words, int count);

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: A pointer to an array of strings (words), or NULL if str == NULL
 *         or str == ""
 */
char **strtow(char *str)
{
    char **words;
    int i, j, k, count, word_length;

    if (str == NULL || *str == '\0')
        return (NULL);

    count = count_words(str);
    if (count == 0)
        return (NULL);

    words = malloc(sizeof(char *) * (count + 1));
    if (words == NULL)
        return (NULL);

    for (i = 0, j = 0; j < count; ++i)
    {
        if (str[i] != ' ')
        {
            word_length = get_word_length(&str[i]);
            words[j] = malloc(sizeof(char) * (word_length + 1));
            if (words[j] == NULL)
                return (free_words(words, j));
            for (k = 0; k < word_length; ++k)
                words[j][k] = str[i + k];
            words[j][k] = '\0';
            ++j;
            i += word_length;
        }
    }

    words[count] = NULL;
    return (words);
}

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count words in
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
    int i, count = 0;

    for (i = 0; str[i] != '\0'; ++i)
    {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
            ++count;
    }

    return (count);
}

/**
 * get_word_length - Gets the length of the first word in a string
 * @str: The string to get the word length from
 *
 * Return: The length of the first word in the string
 */
int get_word_length(char *str)
{
    int i;

    for (i = 0; str[i] != '\0' && str[i] != ' '; ++i)
        ;

    return (i);
}

/**
 * free_words - Frees an array of words
 * @words: The array of words to free
 * @count: The number of words in the array
 *
 * Return: Always NULL
 */
char **free_words(char **words, int count)
{
    int i;

    for (i = 0; i < count; ++i)
        free(words[i]);

    free(words);
    return (NULL);
}

