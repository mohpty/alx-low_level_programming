#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number
 * Return: always 0
 */
int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = n % 10;
	_putchar(lastdigit + '0');
	return (0);
}
