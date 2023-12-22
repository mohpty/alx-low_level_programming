#include "hash_tables.h"

/**
 * create_node - creates a node
 * @key: key
 * @value: the size of the node
 * Return: the new created node, or NULL
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		return (NULL);
	}

	node->key = strdup(key);
	node->value = strdup(value);

	if (node->key == NULL || node->value == NULL)
	{
		free(node->key);
		free(node->value);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht : hash table you want to update the key
 * @key : the key.
 * @value : value that associated with the key
 *
 * Return: 1 if funtion was successed, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new_node, *tmp;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}

	idx = key_index((const unsigned char *)key, ht->size);
	new_node = ht->array[idx];

	while (new_node != NULL)
	{
		if (strcmp(new_node->key, key) == 0)
		{
			free(new_node->value);
			new_node->value = strdup(value);
			if (new_node->value == NULL)
			{
				return (0);
			}
			return (1);
		}
		new_node = new_node->next;
	}

	tmp = create_node(key, value);
	if (tmp == NULL)
	{
		return (0);
	}

	tmp->next = ht->array[idx];
	ht->array[idx] = tmp;

	return (1);
}
