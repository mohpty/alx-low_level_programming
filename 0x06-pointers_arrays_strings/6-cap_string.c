#include "main.h"

/**
 * is_delimiter - tell me if the character is a delimiter
 * @c: pointer to the char
 * Return: 1 if true, 0 otherwise
 */
int is_delimiter(char *c)
{
	switch (*c)
	{
		case '}':
		case '{':
		case ')':
		case '(':
		case '\"':
		case '?':
		case '!':
		case '.':
		case ';':
		case ',':
		case '\n':
		case '\t':
		case ' ':
			return (1);
		default:
			return (0);
	}
}


/**
 * cap_string - capitalizes all words of a string.
 * @s: the string.
 * Return: pointer to the same string modified.
 */
char *cap_string(char *s)
{
	char *p1 = s;
	int cap = 0;

	while (*p1 != '\0')
	{
		if (cap)
		{
			if (*p1 >= 97 && *p1 < 123)
			{
				*p1 = *p1 - 32;
				cap = 0;
			}
			else if (*p1 >= 65 && *p1 <= 90)
			{
				cap = 0;
			}
			p1++;
			continue;
		}

		if (is_delimiter(p1))
			cap = 1;
		p1++;

	}

	return (s);
}
