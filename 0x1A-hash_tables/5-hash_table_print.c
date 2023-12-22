#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: hash table to print.
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *new_node;
	int fl = 1;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		new_node = ht->array[i];
		while (new_node != NULL)
		{
			if (!fl)
				printf(", ");
			printf("'%s': '%s'", new_node->key, new_node->value);
			fl = 0;
			new_node = new_node->next;
		}
	}
	printf("}\n");
}
