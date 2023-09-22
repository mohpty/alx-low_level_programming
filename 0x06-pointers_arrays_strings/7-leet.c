#include "main.h"

/**
 * leet - incrypt a string
 * @s: the string
 * Return: pointer to the modified string;
 */
char *leet(char *s)
{
	int keys[] = {65, 97, 69, 101, 79, 111, 84, 116, 76, 108};
	int values[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};
	int i;
	char *p = s;

	while (*s != '\0')
	{
		for (i = 0; i < 10; i++)
		{
			if (keys[i] == *s)
			{
				*s = values[i];
			}
		}
		s++;
	}


	return (p);
}
