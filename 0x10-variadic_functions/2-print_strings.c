#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print all strings in args
 * @separator: character to print between args
 * @n: number of args
 * Return: always nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char*);
		if (!str)
			str = "(nil)";
		if (!separator || (separator && i == 0))
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}
	va_end(ptr);
	printf("\n");
}
