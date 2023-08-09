#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#define UNUSED(x) (void)(x)

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	if (argc < 2)
	{
		puts("0");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		bool valid = true;

		for (j = 0; argv[i][j]; j++)
			if (!isdigit(argv[i][j]))
				valid = false;

		if (valid)
			sum += atoi(argv[i]) > 0 ? atoi(argv[i]) : 0;
		else
		{
			puts("Error");
			return (1);
		}
	}
	printf("%d\n", sum);

	return (0);
}
