#include "main.h"

/**
 * print_number - prints a number
 * @n: the number
 * Return: void
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar(48);
	}

	else if(n < 0)
	{
		_putchar('-');
	}

	while (n > 0)
	{
		_putchar((n % 10) + 48);
		n /= 10;
	}

}
