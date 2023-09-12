#include <stdio.h>

/**
 * main - count the sum of even fibonacci numbers
 * before the values reach 4 million
 * Return: 0
 */
int main(void)
{
	unsigned long int x, y, temp;
	float total;

	x = 1;
	y = 2;
	total = 0;
	while (1)
	{
		temp = x + y;
		x = y;
		y = temp;

		if (y <= 4000000)
		{
			if (y % 2 == 0)
				total += y;
		}
		else
		{
			break;
		}
	}
	printf("%.0f\n", total+2);

	return (0);
}
