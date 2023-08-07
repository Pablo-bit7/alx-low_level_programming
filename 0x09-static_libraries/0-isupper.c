#include "main.h"

/**
* _isupper - returns 1 if uppercase, 0 if not
* @c: holds ... value of character
*
* Return: 1 or 0
*/
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z') ? 1 : 0;
}