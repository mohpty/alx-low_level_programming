#include "main.h"

/**
 * is_palindrome - check if a string is palindrom
 * @s: pointer to the string
 * Return: 1 if true, 0 otherwise
 */
int count(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + count(s + 1));
}

int is_plnd(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - i))
		return (0);
	if (i >= len)
		return (1);

	return (is_plnd(s, i + 1, len));

}

int is_palindrome(char *s)
{
	char *p = s;

	return is_plnd(s, 0, count(p) - 1);
}
