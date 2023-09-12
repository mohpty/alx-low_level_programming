#include "main.h"

/**
 * main - print the word _putchar
 * Return: always 0
 */
int main(void)
{
	char string[] = "_putchar";
	int idx;

	for (idx = 0; idx < 8; idx++)
	{
		_putchar(string[idx]);
	}
	_putchar('\n');

	return (0);
}
