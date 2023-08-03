#include "main.h"

/**
 * _pow_recursion - Raises x to the power of y using recursion.
 *
 * @x: The base number.
 * @y: The exponent to which x is raised.
 *
 * Return: x raised to the power of y, or -1 if y is lower than 0 (error).
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		/* Error: Power is not defined for negative exponents */
		return (-1);
	}

	if (y == 0)
	{
		/* Base case: any number raised to the power of 0 is 1 */
		return (1);
	}

	/* Recur call func with (x, y - 1) and multiply with x */
	return (x * _pow_recursion(x, y - 1));
}
