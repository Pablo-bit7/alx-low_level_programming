#include "main.h"

/**
* _strcmp - compares two strings
*
* @s1: holds first string
*
* @s2: holds second string
*
* Return: s1 - s2 (diff in ASCII values)
**/
int _strcmp(char *s1, char *s2)
{
    while (*s1 != '\0' && *s2 != '\0')
    {
        if (*s1 != *s2)
        {
            return (*s1 - *s2);
        }
        s1++;
        s2++;
    }

    return (*s1 - *s2);
}