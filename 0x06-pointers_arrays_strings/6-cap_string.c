#include "main.h"

/**
 * is_delimiter - tell me if the character is a delimiter
 * @c: pointer to the char
 * Return: 1 if true, 0 otherwise
 */
int is_delimiter(char c)
{
	int i;
	char dels[] = " \t\n,;.!?\"(){}";

	for (i = 0; i < 12; i++)
	{
		if (dels[i] == c)
		{
			return (1);
		}
	}

	return (0);
}


/**
 * is_lower - returns if a character is lowercase
 * @c: character to test.
 * Return: 1 if lowercase, 0 otherwise.
 */
int is_lower(char c)
{
	return (c >= 97 && c <= 122);
}


/**
 * cap_string - capitalizes all words of a string.
 * @s: the string.
 * Return: pointer to the same string modified.
 */
char *cap_string(char *s)
{
	char *p1 = s;
	int cap = 1;

	while (*p1)
	{
		if (is_delimiter(*p1))
		{
			cap = 1;
		}
		else if (is_lower(*p1) && cap)
		{
			*p1 -= 32;
			cap = 0;
		}
		else
			cap = 0;

		p1++;
	}

	return (s);
}
