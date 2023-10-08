#include "main.h"
#include <stdlib.h>

/**
 * array_range - allocates array in memory
 * @min: number of elements
 * @max: number of bytes per element
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int *p1;
	int i;

	if (min > max)
		return (NULL);

	p1 = malloc(sizeof(int) * (max - min + 1));
	if (p1 == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		p1[i] = min++;

	return (p1);
}
