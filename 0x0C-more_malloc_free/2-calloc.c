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
	char *p1;
	unsigned int i, n;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p1 = malloc(size * nmemb);

	if (p1 == NULL)
		return (NULL);
	n = nmemb * size;
	for (i = 0; i < n; i++)
		p1[i] = 0;

	return (p1);
}
