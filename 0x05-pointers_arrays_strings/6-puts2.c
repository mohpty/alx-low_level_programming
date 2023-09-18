#include "main.h"
#include <unistd.h>
/**
 * puts2 - print every other char
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	char c = '\n';
	char *p = &c;
	int i = 0;

	while (*str != '\0')
	{
		if (i % 2 == 1)
		{
			str++;
			i++;
			continue;
		}
		else
		{
			write(1, str, 1);
			i++;
			str++;
		}
	}
	write(1, p, 1);
}
