#include "hash_tables.h"

/**
 *key_index - fun that gives you the index of a key
 *@key : is the key
 *@size : is the size of the hash table
 *
 *Return: int at which the key or value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int res;

	res = (hash_djb2(key) % size);
	return (res);
}
