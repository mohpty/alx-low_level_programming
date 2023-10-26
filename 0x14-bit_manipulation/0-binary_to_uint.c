#include "main.h"
#include <stddef.h>

#include <stdio.h>
/**
 * binary_to_uint - converts binary integer to decimal unsigned integer
 * @b: string represent binary value
 * Return: converted number, or 0 if:
 *	there is one or more chars in b that isn't 1 or 0
 *	b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int idx, coef, bit;
	unsigned int converted = 0;

	if (b == NULL)
		return (0);

	for (idx = 0; b[idx]; idx++)
		continue;
	idx -= 1;
	coef = 1;
	for (; idx >= 0; idx--)
	{
		if (b[idx] != '0' && b[idx] != '1')
			return (0);
		bit = b[idx] == '0' ? 0 : 1;
		converted += (coef * bit);

		coef *= 2;
	}

	return (converted);
}
