#include "main.h"
#include <stddef.h>

/**
 * is_there - search for a substring in a string
 * @start: pointer to the string
 * @accept: pointer to the substring to look for
 * Return: 1 if we found the substr, 0 otherwise.
 */
int is_there(char *start, char *accept)
{
	char *p = start;
	char *q = accept;

	while (*q != '\0')
	{
		if (*p != *q)
			return (0);
		q++;
		p++;
	}
	return (1);
}

/**
 * _strstr - search for a substring in a string
 * @haystack: pointer to the string
 * @needle: pointer to the substring to look for
 * Return: pointer to the first occurence or to NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *p = haystack;

	while (*p != '\0')
	{
		if (*p == *needle)
		{
			if (is_there(p, needle))
			{
				return (p);
			}
		}
		p++;
	}

	return (NULL);
}
