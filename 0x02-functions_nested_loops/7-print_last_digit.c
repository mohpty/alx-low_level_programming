#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number
 * Return: always 0
 */
int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
		lastdigit = -1 * (n % 10);
	else
		lastdigit = n % 10;
	_putchar(lastdigit + '0');
	return (lastdigit);
}
