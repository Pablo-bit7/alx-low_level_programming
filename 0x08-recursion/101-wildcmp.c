#include "main.h"

/**
 * wildcmp - Compares two strings considering the special character '*'.
 *
 * @s1: The first input string to be compared.
 * @s2: contain the special character '*'.
 *
 * Return: 1 if the strings can be considered identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		/* Both strings are empty, so they are identical */
		return (1);
	}

	if (*s2 == '*')
	{
		if (*s1 == '\0')
		{
			/* If s1 is empty and s2 contains only '*', consider them identical */
			return (wildcmp(s1, s2 + 1));
		}

		/*  */
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}

	if (*s1 == *s2)
	{
		/* If characters match, continue checking the next characters */
		return (wildcmp(s1 + 1, s2 + 1));
	}

	/* Characters do not match, so the strings are not identical */
	return (0);
}
