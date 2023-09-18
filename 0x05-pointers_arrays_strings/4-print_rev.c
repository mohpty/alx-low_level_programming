#include "main.h"
#include <unistd.h>
/**
 * print_rev - print a str in reverse
 * @s: the string
 * Return: void
 */
void print_rev(char *s)
{
	char c = '\n';
	char *p = &c;
	char *p1 = s;

	while (*p1 != '\0')
	{
		p1++;
	}
	
	p1--;
	while (p1 != s)
	{
		write(1, p1, 1);
		p1--;
		if (p1 == s)
		{
			write(1, p1, 1);
			break;
		}
	}
	write(1, p, 1);
}
