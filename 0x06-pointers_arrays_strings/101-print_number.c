#include "main.h"

/**
 * print_number - Prints an integer.
 *
 * @n: The integer to print.
 */
void print_number(int n)
{
    int reverse = 0;
    int digit;

    if (n == 0)
    {
        _putchar('0');
        return;
    }

    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    while (n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }

    while (reverse > 0)
    {
        digit = reverse % 10;
        _putchar('0' + digit);
        reverse /= 10;
    }
}