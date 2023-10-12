#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print all numbers in args
 * @separator: characater to be printed between numbers
 * @n: number of args
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));
		if (i != n - 1)
			printf("%c ", (separator ? *separator : ''));
	}
	va_end(ptr);
	printf("\n");
}
