#include "main.h"
#include <stdlib.h>

/**
 * _realloc - resize array allocated memory
 * @ptr: pointer to the start of the array
 * @old_size: old array size in bytes
 * @new_size: new array size in bytes
 * Return: void pointer to the array resized
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p1;
	char *prev_p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	p1 = malloc(new_size);
	if (p1 == NULL)
		return (NULL);

	prev_p = ptr;
	for (i = 0; i < (new_size > old_size ? old_size : new_size); i++)
		p1[i] = prev_p[i];

	free(ptr);
	return (p1);
}
