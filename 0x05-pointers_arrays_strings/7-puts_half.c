#include "main.h"

/**
* puts_half - prints second half of a string, followed by a new line.
* If number of characters is odd, prints the last n characters
* of the string, where n = (length_of_the_string - 1) / 2
*
* @str: holds string array
*/
void puts_half(char *str)
{
	int length = 0;
	int i;
	int start_index;

	while (str[length] != '\0')
	{
		length++;
	}

	start_index = length / 2;

	if (length % 2 != 0)
	{
		start_index = (length + 1) / 2;
	}

	for (i = start_index; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
