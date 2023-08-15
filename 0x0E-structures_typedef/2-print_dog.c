#include <stdio.h>
#include <stddef.h>
#include "dog.h"

/**
 * print_dog - Prints information about a struct dog
 * @d: Pointer to the struct dog to print
 *
 * Description: This function prints the information stored in the struct dog.
 * If any element of the struct is NULL, "(nil)" is printed.
 * If d is NULL, nothing is printed.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
