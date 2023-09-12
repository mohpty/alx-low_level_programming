#include "main.h"

/**
 * print_times_table - prints the times table until a certain number
 * @n: from zero to n, selected times table to print.
 * Return: always 0
 */
void print_times_table(int n)
{
	int a, p, x;

	if (n > 15 || n < 0)
		return;

	for (a = 0; a <= n; a++)
	{
		_putchar('0');
		for (p = 1; p <= n; p++)
		{
			_putchar(',');
			_putchar(' ');

			x = a * p;

			if (x < 10)
				_putchar(' ');
			if (x < 100)
				_putchar(' ');

			if (x >= 100)
			{
				_putchar((x / 100) + 48);
				_putchar((x / 10) % 10 + 48);
			}
			else if (x <= 99 && x >= 10)
			{
				_putchar((x / 10) + 48);
			}
			_putchar((x % 10) + 48);
		}
		_putchar('\n');
	}
}
