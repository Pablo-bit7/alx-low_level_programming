#include "main.h"

/**
 * _sqrt_helper - Helper function to find the square root using binary search.
 *
 * @n: The number for which the square root is to be calculated.
 * @start: The start of the binary search range.
 * @end: The end of the binary search range.
 *
 * Return: Square root of the number, or -1 if not.
 */
int _sqrt_helper(int n, int start, int end)
{
	int mid;
	int square;

	if (start > end)
	{
		/* If start exceeds end, n does not have a natural square root */
		return (-1);
	}

	mid = (start + end) / 2;
	square = mid * mid;

	if (square == n)
	{
		/* Found the natural square root */
		return (mid);
	}
	else if (square < n)
	{
		/* Recurse on the right half of the binary search range */
		return (_sqrt_helper(n, mid + 1, end));
	}
	else
	{
		/* Recurse on the left half of the binary search range */
		return (_sqrt_helper(n, start, mid - 1));
	}
}

/**
 * _sqrt_recursion - Square root of a number using recursion.
 *
 * @n: The number for which the square root is to be calculated.
 *
 * Return: Square root of the number, or -1 if not.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		/* Square root is not defined for negative numbers */
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		/* Base case: square root of 0 or 1 is itself */
		return (n);
	}

	return (_sqrt_helper(n, 1, n / 2)); /* Start the binary search from 0 to n */
}
