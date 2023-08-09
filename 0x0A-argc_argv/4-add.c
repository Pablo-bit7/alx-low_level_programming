#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define UNUSED(x) (void)(x)

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
	int i;
	int j;

	UNUSED(argv);    
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int num = 0;
		bool is_valid = true;

		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				is_valid = false;
				break;
			}
		}

		if (is_valid)
		{
			num = atoi(argv[i]);
			if (num > 0)
			{
				sum += num;
			}
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
