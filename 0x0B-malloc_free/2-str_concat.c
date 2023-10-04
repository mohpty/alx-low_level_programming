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
	char *cnt1, *cnt2, *arr, *ptr;
	int size1, size2;

	size1 = size2 = 0;
	cnt1 = s1;
	cnt2 = s2;
	while (*cnt1 != '\0')
	{
		size1++;
		cnt1++;
	}
	while (*cnt2 != '\0')
	{
		size2++;
		cnt2++;
	}

	arr = (char *) malloc(size1 + size2 + 1 * sizeof(char));
	ptr = arr;

	if (arr == NULL)
		return (NULL);

	while (*s1 != '\0')
	{
		*ptr = *s1;
		ptr++;
		s1++;
	}
	while (*s2 != '\0')
	{
		*ptr = *s2;
		ptr++;
		s2++;
	}
	*ptr = '\0';

	return (arr);
}
