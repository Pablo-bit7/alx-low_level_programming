#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Checks if a string is a valid positive integer
 * @str: The string to check
 *
 * Return: 1 if valid, 0 otherwise
 */
int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - Multiplies two positive numbers
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	char *num1 = argv[1];
	char *num2 = argv[2];
	int len1 = 0, len2 = 0, len_result, i, j, carry, product;
	int *result;

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;

	len_result = len1 + len2;
	result = calloc(len_result, sizeof(int));

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			product = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
			carry = product / 10;
			result[i + j + 1] = product % 10;
		}
		result[i + j + 1] = carry;
	}

	i = 0;
	while (i < len_result - 1 && result[i] == 0)
		i++;

	while (i < len_result)
		putchar(result[i++] + '0');

	putchar('\n');
	free(result);
	return (0);
}
