#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 *
 * @n: The input number for which the factorial is to be calculated.
 *
 * Return: The factorial of the number, or -1 if n is lower than 0 (error).
 */
int factorial(int n)
{
	if (n < 0)
	{
		/* Error: Factorial is not defined for negative numbers */
		return (-1);
	}

	if (n == 0)
	{
		/* Base case: factorial of 0 is 1 */
		return (1);
	}

	return (n * factorial(n - 1));
}
