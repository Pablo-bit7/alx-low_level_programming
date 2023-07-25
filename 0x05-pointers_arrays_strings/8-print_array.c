#include "main.h"
#include <stdio.h>

/**
* prints n elements of an array of integers, followed by a new line
*
* where n is the number of elements of the array to be printed
*
* numbers are displayed in the same order as they are stored in the array
*/
void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++) {
        printf("%d", a[i]);

        if (i != n - 1) {
            printf(", ");
        }
    }

    printf("\n");
}