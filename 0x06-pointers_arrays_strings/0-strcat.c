#include "main.h"

/**
* _strcat - concatenates two strings
*
* @src: holds second second string
*
* @dest: holds first string
*
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
    char *ptr = dest;

    /* Move the pointer to the end of the destination string */
    while (*ptr) {
        ptr++;
    }

    /* Append the src string to the destination string */
    while (*src)
    {
        *ptr = *src;
        ptr++;
        src++;
    }

    /* Add the terminating null byte */
    *ptr = '\0';

    return (dest);
}