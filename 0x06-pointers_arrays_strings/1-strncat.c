#include "main.h"

/**
* _strncat - concatenates two strings
*
* @src: holds first string
*
* @dest: holds the second string
*
* @n: number of bytes from src
*
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	/* Move the pointer to the end of the destination string */
	while (*ptr)
	{
		ptr++;
	}

	/* Append the src string to the destination string, up to n characters */
	while (*src && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	/* Add the terminating null byte */
	*ptr = '\0';

	return (dest);
}
