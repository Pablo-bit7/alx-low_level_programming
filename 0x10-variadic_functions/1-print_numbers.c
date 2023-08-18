#include <stdio.h>
#include "variadic_functions.h"
#include <unistd.h> /* Include for write */
#include <stddef.h> /* Include for NULL */

/**
 *_putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: The variable arguments (integers).
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		if (i > 0 && separator != NULL)
		{
			unsigned int j = 0;
			while (separator[j])
			{
				_putchar(separator[j]);
				j++;
			}
		}

		/* Print each digit of the number */
		if (num == 0)
		{
			_putchar('0');
		}
		else
		{
			int reversed = 0;
			int is_negative = 0;

			if (num < 0)
			{
				is_negative = 1;
				num = -num;
			}

			while (num > 0)
			{
				reversed = reversed * 10 + (num % 10);
				num /= 10;
			}

			if (is_negative)
				_putchar('-');

			while (reversed > 0)
			{
				_putchar(reversed % 10 + '0');
				reversed /= 10;
			}
		}
	}

	va_end(args);

	_putchar('\n');
}
