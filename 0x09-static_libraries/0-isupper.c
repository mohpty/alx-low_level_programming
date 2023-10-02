#include "main.h"
/**
 * _isupper - checks if the letter is uppercase.
 * @c: letter in its ascii value.
 * Return: 1 if uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	return (c >= 65 && c <= 90 ? 1 : 0);
}
