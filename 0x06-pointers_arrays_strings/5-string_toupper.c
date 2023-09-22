#include "main.h"

/**
 * string_toupper - changes all lowercase letters to upper.
 * @s: the string
 * Return: pointer to the new string
 */
char *string_toupper(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		if (*p >= 97 && *p < 123)
		{
			*p = *p - 32;
		}
		p++;
	}

	return (s);
}
