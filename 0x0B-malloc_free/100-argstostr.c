#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates all the arguments of a program
 * @ac: The argument count
 * @av: Array of pointers to arguments
 *
 * Return: Pointer to the concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, total_len = 0;
	char *concatenated;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of all arguments + newlines */
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
			len++;
		total_len += len + 1; /* Add 1 for the newline */
	}

	/* Allocate memory for the concatenated string */
	concatenated = (char *)malloc(total_len * sizeof(char));
	if (concatenated == NULL)
		return (NULL); /* Memory allocation failed */

	/* Copy the arguments to the concatenated string */
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatenated[len] = av[i][j];
			len++;
		}
		concatenated[len] = '\n';
		len++;
	}

	return (concatenated);
}
