#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	int first = 1; /* Variable to check if it's the first element */

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			/* Print comma and space if it's not the first element */
			if (first == 0)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			first = 0; /* Set to 0 after printing the first element */
			current = current->next;
		}
	}
	printf("}\n");
}

