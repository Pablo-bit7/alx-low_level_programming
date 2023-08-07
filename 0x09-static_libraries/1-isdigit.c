#include "main.h"

/**
* _isdigit - returns 1 if digit, 0 if not
* @c: holds ... value of character
*
* Return: 1 or 0
*/
int _isdigit(int c)
{
	return (c >= '0' && c <= '9') ? 1 : 0;
}