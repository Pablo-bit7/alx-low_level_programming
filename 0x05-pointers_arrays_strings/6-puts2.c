#include "main.h"

/**
* prints every other character of a string, starting with the first character, followed by a new line.
*/
void puts2(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i += 2;
    }

    _putchar('\n');
}