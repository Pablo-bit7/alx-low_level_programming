#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes from s2 to concatenate
 *
 * Return: Pointer to concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;
	unsigned int len1 = 0, len2 = 0, i, j;

	/* Calculate the lengths of the strings */
	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	/* Allocate memory for concatenated string */
	if (n >= len2)
		n = len2; /* Use entire s2 if n is greater or equal to its length */
	concatenated = malloc(sizeof(char) * (len1 + n + 1));

	if (concatenated == NULL)
		return (NULL); /* Memory allocation failed */

	/* Copy s1 to concatenated string */
	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];

	/* Concatenate n bytes of s2 to concatenated string */
	for (j = 0; j < n; j++)
		concatenated[i + j] = s2[j];

	concatenated[i + j] = '\0'; /* Null-terminate the concatenated string */

	return (concatenated);
}
