#include "main.h"
#include <stdlib.h>

/**
 * _strdup - allocate an array and set its value with a string
 * @str: string to initialize the array with
 * Return: pointer to array or NULL
 */
char *_strdup(char *str)
{
	char *arr;
	unsigned int i, len;

	i = len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	arr = malloc(sizeof(char) * (len + 1));

	if (arr == NULL)
		return (NULL);

	while ((arr[i] = str[i]) != '\0')
		i++;

	return (arr);
}
