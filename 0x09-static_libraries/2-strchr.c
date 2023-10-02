#include "main.h"
#include <stddef.h>

/**
 * _strchr - returns a pointer to the first occurence
 * of c in the string s or NULL otherwise.
 * @s: string to look into
 * @c: character to look for
 * Return: pointer to first c, or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
