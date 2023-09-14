#include "main.h"

/**
 * print_diagonal - prints a diagonal line in terminal
 * @n: length of the terminal.
 * Return: void
 */
void print_diagonal(int n)
{
	int l, s;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (l = 0; l < n; l++)
	{
		for (s = 0; s < l; s++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
