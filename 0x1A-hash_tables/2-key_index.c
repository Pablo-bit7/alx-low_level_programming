#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in the hash table array.
 * @key: The key.
 * @size: The size of the array of the hash table.
 *
 * Return: The index at which the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	unsigned long int index;

	/* Use the hash_djb2 function to get the hash value */
	hash_value = hash_djb2(key);

	/* Calculate the index using the hash value and the size of the array */
	index = hash_value % size;

	return (index);
}

