#include <stdio.h>

/**
 * main - print all the alphabet except for two letters
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 97 ; i < 123 ; i++)
	{
		if (i == 'q' || i == 'e')
		{
			continue;
		};

		putchar(i);
	}
	putchar('\n');

	return (0);
}
