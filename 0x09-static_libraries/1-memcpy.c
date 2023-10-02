#include "main.h"

/**
 * _memcpy - copy n bytes from one address to another
 * @dest: address to copy to
 * @src: address to copy from
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
	{
		*p = *src;

		p++;
		src++;
	}

	return (dest);
}
