#include "main.h"

/**
 * print_line - draws a line
 * @n: specify the length of the line
 * Return: always 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
