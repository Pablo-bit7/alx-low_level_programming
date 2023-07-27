#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 *
 * @str: The string to convert.
 *
 * Return: A pointer to the resulting string.
 */
char *string_toupper(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 'a' + 'A';
        }
        i++;
    }

    return (str);
}
