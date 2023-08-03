#include "main.h"

/**
 * _sqrt_helper - Find the square root using binary search.
 *
 * @n: The number for which the square root is to be calculated.
 * @start: The start of the binary search range.
 * @end: The end of the binary search range.
 *
 * Return: Square root of the number, or -1 if not.
 */
int _sqrt_helper(int n, int start, int end)
{
	if (start > end)
	{
		/* If start exceeds end, n does not have a natural square root */
		return (-1);
	}

	int mid = (start + end) / 2;
	int square = mid * mid;

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

	return (_sqrt_helper(n, 0, n)); /* Start the binary search from 0 to n */
}
