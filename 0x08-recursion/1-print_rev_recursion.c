#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 *
 * @s: The input string to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		/* Base case: when the end of the string is reached (null terminator) */
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s); /* Print the current character after the recursive call */
}
