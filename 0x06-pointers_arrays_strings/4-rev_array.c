#include "main.h"

/**
* reverse_array - reverses the content of an array of integers
*
* @a: holds array of integers
*
* @n: number of elements
**/
void reverse_array(int *a, int n)
{
    int temp;

    for (int i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
}