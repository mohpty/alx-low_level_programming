#include "main.h"

/**
 * _memset - fill in space with a byte value
 * @s: pointer to the space
 * @b: the byte value to fill
 * @n: number of bytes to fill
 * Return: pointer to the space filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p = b;
		p++;
	}

	return (s);
}
