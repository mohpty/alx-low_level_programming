#include "main.h"

/**
 * count - return length of a string
 * @s: pointer to the string
 * Return: length of the string
 */
int count(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + count(s + 1));
}

/**
 * is_plnd - check if a string is a palindrome
 * @s: pointer to string
 * @i: iterator
 * @len: length of the string
 * Return: 1 if is true, 0 otherwise
 */
int is_plnd(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - i))
		return (0);
	if (i >= len)
		return (1);

	return (is_plnd(s, i + 1, len));

}

/**
 * is_palindrome - check if string is a palindrome
 * @s: pointer to the string
 * Return: 1 if true, 0 otherwise.
 */
int is_palindrome(char *s)
{
	char *p = s;

	return (is_plnd(s, 0, count(p) - 1));
}
