#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - check if memory has been allocated
 * @b: size in bytes
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
		exit(98);
	
	return (x);
}
