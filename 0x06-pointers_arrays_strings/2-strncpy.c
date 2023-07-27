#include "main.h"

/**
* _strncpy - copies a string
*
* @src: holds string
*
* @dest: holds copied string
*
* @n: number of charaters to be copied
*
* Return: dest
**/
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    /* Copy up to n characters from src to dest */
    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    /* If src has fewer than n characters, pad dest with null bytes */
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }

    return (dest);
}