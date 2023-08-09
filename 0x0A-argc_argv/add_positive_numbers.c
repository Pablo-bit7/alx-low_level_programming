#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#define UNUSED(x) (void)(x)

/**
 * add_positive_numbers - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 if successful, 1 if error
 */
int add_positive_numbers(int argc, char *argv[])
{
	int i;

	UNUSED(argc);
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (is_positive_integer(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}
