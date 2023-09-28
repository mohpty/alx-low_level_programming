#include "main.h"

/**
 * _sqrtrec - calculate square root of a number
 * @n: the number
 * @i: the iterator
 * Return: square root of a number
 */
int _sqrtrec(int n, int i)
{

	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);

	return (_sqrtrec(n, i + 1));
}

/**
 * _sqrt_recursion - find sqrt of a number
 * @n: the number
 * Return: the square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrtrec(n, 0));
}
