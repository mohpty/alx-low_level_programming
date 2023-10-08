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
	int *p1, *ptr, i;

	p1 = (int *) malloc(sizeof(int) * (max - min) + 1);
	if (p1 == NULL || min > max)
		return (NULL);
	ptr = p1;

	for (i = min; i <= max; i++)
	{
		*p1 = i;
		p1++;
	}

	return (ptr);
}
