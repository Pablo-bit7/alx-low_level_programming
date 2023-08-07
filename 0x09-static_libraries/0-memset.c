#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: takes pointer
 *
 * @b: holds constant byte
 *
 * @n: holds number of bytes to be filled
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
