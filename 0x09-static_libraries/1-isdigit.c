#include "main.h"

/**
 * _isdigit - check if the character is a digit
 * @c: character value in ascii form
 * Return: 1 if it's a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	return (c >= 48 && c < 58 ? 1 : 0);
}
