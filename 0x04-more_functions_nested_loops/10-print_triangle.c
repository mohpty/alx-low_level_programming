#include "main.h"

/**
 * print_traingle - self explanatory
 * @size: height of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, s, h;
	
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (s = 0; s < (size - i); s++)
		{
			_putchar(' ');
		}
		for (h = 0; h < i; h++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
