#include "main.h"

/**
 * _strncpy - This function copies n bytes from the src
 * string to the dest string
 * @n: byte limit
 * @dest: pointer to destination string
 * @src: pointer to source string
 * Return: pointer to the whole string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *p1 = dest;
	int ended = 0;

	while (n--)
	{
		if (ended)
			*p1 = '\0';
		else
			*p1 = *src;

		if (*src == '\0')
			ended = 1;

		p1++;
		src++;
	}

	return (dest);
}
