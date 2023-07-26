#include "main.h"

/**
*swap_int - swaps the values of two integers
*
*@a: set to hold *b
*@b: set to hold temp
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
