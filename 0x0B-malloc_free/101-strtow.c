#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: Pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
    int words = 0;
    int i, j, k, len, word_start;

    char **word_array;

    if (str == NULL || *str == '\0')
        return (NULL);

    /* Count the number of words */
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
            words++;
    }

    word_array = (char **)malloc((words + 1) * sizeof(char *));
    if (word_array == NULL)
        return (NULL); /* Memory allocation failed */

    /* Extract and store words in the word_array */
    for (i = 0, j = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
        {
            word_start = i;
        }
        else if (str[i] == ' ' && (i == 0 || str[i - 1] != ' '))
        {
            len = i - word_start;
            word_array[j] = (char *)malloc((len + 1) * sizeof(char));
            if (word_array[j] == NULL)
            {
                /* Free memory for previously allocated words */
                for (k = 0; k < j; k++)
                    free(word_array[k]);
                free(word_array);
                return (NULL); /* Memory allocation failed */
            }
            for (k = 0; k < len; k++)
            {
                word_array[j][k] = str[word_start + k];
            }
            word_array[j][len] = '\0';
            j++;
        }
    }

    word_array[j] = NULL;

    return (word_array);
}
