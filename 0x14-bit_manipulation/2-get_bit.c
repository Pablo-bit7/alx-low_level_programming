#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number from which to retrieve the bit.
 * @index: The index of the bit to be retrieved.
 *
 * Return: Value of bit at the specified index or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bitmask, bitValue;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	bitmask = 1 << index;
	bitValue = n & bitmask;

	if (bitValue == bitmask)
		return (1);

	return (0);
}
