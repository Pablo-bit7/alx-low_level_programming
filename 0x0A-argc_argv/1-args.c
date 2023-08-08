#include <stdio.h>

#define UNUSED(x) (void)(x)

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	UNUSED(argv);

	printf("%d\n", argc - 1);
	return (0);
}
