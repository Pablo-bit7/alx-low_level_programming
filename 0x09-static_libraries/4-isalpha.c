#include "main.h"

/**
* _isalpha - returns 1 if in alphabet, 0 if not
* @c: holds ... value of character
*
* Return: 1 or 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return 1;
	} else {
		return 0;
	}
}