#include "hash_tables.h"

/**
 *hash_table_get - retrieves value associated with a key.
 *@ht: ht what want to look into it
 *@key: the key.
 *
 *Return: value to the element, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}

	idx = key_index((const unsigned char *)key, ht->size);
	new_node = ht->array[idx];

	while (new_node != NULL)
	{
		if (strcmp(new_node->key, key) == 0)
		{
			return (new_node->value);
		}
		new_node = new_node->next;
	}
	return (NULL);
}
