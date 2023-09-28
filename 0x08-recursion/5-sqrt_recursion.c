#include "main.h"

/**
 * _sqrt_recursion - calculate square root of a number
 * @n: the number
 * Return: square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (1 + _sqrt_recursion(n / 2));

}
