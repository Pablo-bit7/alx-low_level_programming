#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a given function
 * @name: The name to be printed
 * @f: A function pointer that determines how the name is printed
 *
 * Return: None
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
