#include "main.h"

/**
 * is_prime_helper - Helper function to check if a number is prime.
 *
 * @n: The number to be checked for primality.
 * @divisor: The current divisor to check divisibility of n.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_helper(int n, int divisor)
{
	if (n < 2)
	{
		/* Numbers less than 2 are not prime */
		return (0);
	}

	if (divisor * divisor > n)
	{
		/* If the current divisor exceeds the square root of n, n is prime */
		return (1);
	}

	if (n % divisor == 0)
	{
		/* If n is divisible by the current divisor, n is not prime */
		return (0);
	}

	/* Recursively check with the next divisor */
	return (is_prime_helper(n, divisor + 1));
}

/**
 * is_prime_number - Returns 1 if the integer is prime, otherwise 0.
 *
 * @n: The number to be checked for primality.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	/* Start the helper function with divisor = 2 */
	return (is_prime_helper(n, 2));
}
