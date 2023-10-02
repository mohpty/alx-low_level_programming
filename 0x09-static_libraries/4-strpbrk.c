#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - search for a substring in a string
 * @s: pointer to the string
 * @accept: pointer to the substring to look for
 * Return: pointer to the first occurence or to NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *p = s;
	char *q;

	while (*p != '\0')
	{
		for (q = accept; *q != '\0'; q++)
		{
			if (*p == *q)
				return (p);
		}
		p++;
	}

	return (NULL);
}
