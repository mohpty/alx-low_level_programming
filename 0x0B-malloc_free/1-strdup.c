#include "main.h"
#include <stdlib.h>

/**
 * _strdup - allocate an array and set its value with a string
 * @str: string to initialize the array with
 * Return: pointer to array or NULL
 */
char *_strdup(char *str)
{
	char *ptr, *array, *string;
	int size = 0;

	string = str;
	while (*str != '\0')
	{
		size++;
		str++;
	}

	array = (char *) malloc(sizeof(char) * size + 1);
	if (array == NULL)
		return (NULL);
	ptr = array;

	while (*string != '\0')
	{
		*array = *string;
		array++;
		string++;
	}

	return (ptr);
}
