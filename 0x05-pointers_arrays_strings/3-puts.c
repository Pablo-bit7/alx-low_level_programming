#include "main.h"

/**
* prints a string, followed by a new line, to stdout
*/
void _puts(char *str) {
    while (*str) {
        _putchar(*str);
        str++;
    }
    _putchar('\n');
}
