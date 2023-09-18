#include "main.h"
#include <unistd.h>
/**
 * rev_string - reverse a string.
 * @s: the string
 * Return: void
 */
void rev_string(char *s)
{
	char *counter = s;
	int size = 0;
	int i;
	char temp;

	while (*counter != '\0')
	{
		counter++;
		size++;
	}

	for (i = 0 ; i < (size / 2); i++)
	{
		temp = *(s + i);
		*(s + i) = *((s + size - 1) - i);
		*((s + size - 1) - i) = temp;
	}
}
