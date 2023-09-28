#include "main.h"

/**
 * factorial - return the factorial of a num
 * @n: number
 * Return: factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (factorial(n - 1) * n);
}
