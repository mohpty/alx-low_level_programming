#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned integer
 * Return: always nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;
	int shifts;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = n, shifts = 0; (i >>= 1) > 0; shifts++)
		;

	for (; shifts >= 0; shifts--)
	{
		if ((1 << shifts) & n)
			_putchar('1');
		else
			_putchar('0');
	}
}
