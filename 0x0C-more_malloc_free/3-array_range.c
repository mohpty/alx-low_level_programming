#include "main.h"
#include <stdlib.h>

/**
 * array_range - allocates array in memory
 * @min: number of elements
 * @max: number of bytes per element
 * Return: void
 */
int *array_range(int min, int max)
{
	void *ptr, *p1;
	int i;

	ptr = malloc((max - min) + 1);
	if (ptr == NULL || min > max)
		return (NULL);
	p1 = ptr;

	for (i = 0; i <= max - min; i++)
	{
		p1[i] = i + min;
	}

	return (ptr);
}
