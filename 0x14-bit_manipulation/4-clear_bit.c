#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the bit at given index to 0
 * @n: number
 * @index: index of the bit to change
 * Return: 1 if all goes as planned, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int coef = 1;

	if (index > 64)
		return (-1);

	while (index > 0)
	{
		coef *= 2;
		index--;
	}

	if (coef > *n)
		*n = 0;
	else
		*n -= coef;
	return (1);
}
