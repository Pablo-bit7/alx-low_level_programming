#include "main.h"

/**
* _strlen - swaps the values of two integers
*
* @s: holds string array
*
* Return: parameter length, the length of the string
*/
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}