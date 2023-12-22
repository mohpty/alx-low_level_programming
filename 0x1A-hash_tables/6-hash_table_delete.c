#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table.
 * @ht: hash table to delete
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *new_node, *current;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		new_node = ht->array[i];
		while (new_node != NULL)
		{
			current = new_node;
			new_node = new_node->next;
			free(current->key);
			free(current->value);
			free(current);
		}
	}

	free(ht->array);
	free(ht);
}
