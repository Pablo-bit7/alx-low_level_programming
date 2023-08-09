#include <stdbool.h>
#include <ctype.h>

/**
 * is_positive_integer - Checks if a string represents a positive integer.
 * @str: The string to be checked.
 *
 * Return: True =  string positive integer, otherwise false.
 */
bool is_positive_integer(const char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]))
		{
			return (false);
		}
	}

	int num = atoi(str);

	return (num > 0);
}
