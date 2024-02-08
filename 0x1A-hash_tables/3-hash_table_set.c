#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value.
 * @key: The key. It cannot be an empty string.
 * @value: The value associated with the key. It must be duplicated.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;

	/* Check if the key or value is NULL or empty string */
	if (ht == NULL || key == NULL || value == NULL || key[0] == '\0')
		return (0);

	/* Get the index where the key/value pair should be stored */
	index = key_index((unsigned char *)key, ht->size);

	/* Check if the key already exists in the linked list at that index */
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			/* Key exists, update the value and return success */
			free(current->value); /* Free the existing value */
			current->value = strdup(value);
			if (current->value == NULL)
				return (0); /* strdup failed */
			return (1); /* Success */
		}
		current = current->next;
	}

	/* Key doesn't exist, create a new node and add it to the beginning of the list */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0); /* malloc failed */

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0); /* strdup failed */
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0); /* strdup failed */
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1); /* Success */
}

