#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates array in memory
 * @nmemb: number of elements
 * @size: number of bytes per element
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	
	ptr = malloc(size * nmemb);
	if (ptr == NULL|| nmemb == 0 || size == 0)
		return (NULL);

	return (ptr);
}
