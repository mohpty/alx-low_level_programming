#include "main.h"

/**
 * _sqrt_recursion - calculate square root of a number
 * @n: the number
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

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrtrec(n, 0));
}
