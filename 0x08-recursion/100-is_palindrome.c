#include "main.h"
#include <string.h>

/**
 * is_palindrome_helper - Helper function to check if a string is a palindrome.
 *
 * @s: The input string to be checked.
 * @start: The starting index of the current comparison.
 * @end: The ending index of the current comparison.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		/* Base case: When the entire string has been checked (start >= end) */
		return (1);
	}

	if (s[start] != s[end])
	{
		/* If the characters at start and end do not match */
		return (0);
	}

	/* Recursively check the next pair of characters */
	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - Returns 1 if a string is a palindrome, 0 otherwise.
 *
 * @s: The input string to be checked.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	/* Start the helper function with start = 0 and end = len - 1 */
	return (is_palindrome_helper(s, 0, len - 1));
}
