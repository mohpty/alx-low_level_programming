#include "main.h"

/**
 * more_numbers - print the numbers from 1-14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int i, n;

	for (n = 0; n < 10; n++)
	{
		for (i = 48; i < 63; i++)
		{
			if (i > 57)
				_putchar(49);
			_putchar(i > 57 ? (i % 58) + 48 : i);
		}
		_putchar('\n');
	}
}
