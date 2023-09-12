#include <stdio.h>

/**
 * main - print frist 50 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long int x, y, temp, i;

	x = 1;
	y = 2;
	printf("1, 2, ");
	for (i = 0; i < 49; i++)
	{
		temp = x + y;
		x = y;
		y = temp;
		printf("%lu", y);
		if (i != 48)
			printf(", ");
	}
	puts("\n");

	return (0);
}
