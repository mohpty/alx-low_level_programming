#include "main.h"
#include <unistd.h>
/**
 * _puts - print a char
 * @str: string to be printed
 * Return: void
 */
void _puts(char *str)
{
	char c = '\n';
	char *p = &c;

	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, p, 1);
}
