#include "main.h"

/**
 * _strncat - This function appends n bytes from the src
 * string to the dest string
 * @n: byte limit
 * @dest: pointer to destination string
 * @src: pointer to source string
 * Return: pointer to the whole string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p1 = dest;

	while (*p1 != '\0')
		p1++;

	while (n--)
	{
		*p1 = *src;
		if (*src == '\0')
			break;
		p1++;
		src++;

	}

	return (dest); }
