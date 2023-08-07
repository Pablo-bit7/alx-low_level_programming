#include "main.h"

/**
* _islower - returns 1 if lowercase, 0 if not
* @c: holds ... value of character
*
* Return: 1 or 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
