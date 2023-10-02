#include "main.h"

/**
 * _isalpha - check if the character is a letter.
 * @c: character
 * Return: 1- if it's a letter, 0 otherwise.
 */
int _isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) ? 1 : 0);
}
