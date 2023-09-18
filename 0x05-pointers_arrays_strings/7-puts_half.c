#include "main.h"
#include <unistd.h>

/**
 * puts_half - prints half of the string
 * @str: the string
 * Return: void.
 */
void puts_half(char *str)
{
	char *cnt = str;
	char spc = '\n';
	int size = 0;
	int center, index = 1;

	while (*cnt != '\0')
	{
		size++;
		cnt++;
	}

	if (size % 2 == 1)
		center = (size - 1) / 2;
	else
		center = size / 2;

	while (*str != '\0')
	{
		if (index <= center)
		{
			index++;
			str++;
			continue;
		}
		else
		{
			write(1, str, 1);
			str++;
		}

	}
	cnt = &spc;
	write(1, cnt, 1);
}
