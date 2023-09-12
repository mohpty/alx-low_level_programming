#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabet in 10 lines
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int line, letter;

	for (line = 0; line < 10; line++)
	{
		for (letter = 97; letter < 123; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
