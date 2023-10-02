#include "main.h"

/**
 * _strspn - return the length of the prefix from excepted
 * range of chars.
 * @s: pointer to the string to check
 * @accept: pointer to the string with accepted chars.
 * Return: length of the prefix.
 */
unsigned int _strspn(char *s, char *accept)
{
	char *p;
	unsigned int counter = 0;
	int accepted;

	while (*s != '\0')
	{
		accepted = 0;
		for (p = accept; *p != '\0'; p++)
		{
			if (*s == *p)
			{
				counter++;
				accepted = 1;
				break;
			}
		}

		if (!accepted)
			break;
		s++;
	}

	return (counter);
}
