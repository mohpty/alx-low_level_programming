#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concat two strings in a created array
 * @s1: poniter to first string
 * @s2: pointer to second string
 * Return: pointer to array with concated string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	unsigned int i, j, size1, size2;

	i = j = size1 = size2 = 0;

	while (s1 && s1[size1])
		size1++;

	while (s2 && s2[size2])
		size2++;

	conc = malloc(sizeof(char) * (size1 + size2 + 1));
	if (conc == NULL)
		return (NULL);

	if (s1)
	{
		while (i < size1)
		{
			conc[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (size1 + size2))
		{
			conc[i] = s2[j];
			i++;
			j++;
		}
	}
	conc[i] = '\0';
	return (conc);
}
