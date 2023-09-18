#include "main.h"

/**
 * _strlen - return length of a string
 * @s: string to be processed
 * Return: length of the string s
 */
int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		counter++;
		s++;
	}

	return (counter);
}
