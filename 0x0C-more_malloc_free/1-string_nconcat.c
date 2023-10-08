#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * string_nconcat - concat two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: number of bytes to take from the 2nd string
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr, *p1;

	ptr = (char *) malloc(strlen(s1) + n + 1);
	p1 = ptr;
	if (ptr == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		*p1 = *s1;
		p1++;
		s1++;
	}
	while (*s2 != '\0' && n)
	{
		*p1 = *s2;
		n--;
		p1++;
		s2++;
	}
	*p1 = '\0';

	return (ptr);
}
