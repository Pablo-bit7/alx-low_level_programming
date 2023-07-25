#include "main.h"

/**
* swaps the values of two integers
*/
int _strlen(char *s)
{
    int length = 0;

    while (*s != '\0') {
        length++;
        s++;
    }

    return length;
}