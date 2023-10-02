#include "main.h"

/**
 * _islower - checks if the letter is upper or lower case.
 * @c: character
 * Return: 1 if it's lower case, 0 if it's upper case.
 */
int _islower(int c)
{
	return (c >= 97 && c <= 122 ? 1 : 0);
}
