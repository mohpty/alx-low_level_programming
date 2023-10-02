#include "main.h"

/**
 * _strcpy - copy a string from var to another
 * @src: pointer to the var to copy from
 * @dest: pointer to the var to copy to
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *to = dest;

	while (1)
	{
		*to = *src;

		if (*src == '\0')
		{
			break;
		}
		to++;
		src++;
	}

	return (dest);
}
