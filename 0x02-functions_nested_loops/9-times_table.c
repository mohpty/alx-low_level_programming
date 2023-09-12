#include "main.h"

/**
 * times_table - print the times table from 0-9 formatted.
 * Return: always 0;
 */
void times_table(void)
{
	int n, p, x;

	for (n = 0; n < 10; n++)
	{
		_putchar('0');
		for (p = 1; p < 10; p++)
		{
			_putchar(',');
			_putchar(' ');

			x = n * p;
			if (x < 10)
				_putchar(' ');
			else
				_putchar((x / 10) + 48);
			_putchar((x % 10) + 48);
		}
		_putchar('\n');
	}

}
