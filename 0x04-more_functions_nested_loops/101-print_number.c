#include "main.h"

/**
 * print_number - print a number as it is.
 * @n: the number
 * Return: void
 */
void print_number(int n)
{
	int digits = 0, i, absl;
	char s[sizeof(int)];

	if (n == 0)
	{
		_putchar(48);
		return;
	}

	if (n < 0)
		absl = n * -1;
	else
		absl = n;


	for (i = 0; i <= absl; i += 10)
	{
		digits++;
	}

	for (i = 0; i < digits; i++)
	{
		s[i] = absl % 10;
		absl /= 10;
	}

	if (n < 0)
		_putchar('-');
	for (i = digits; i >= 0; i--)
		_putchar(s[i]);

}
