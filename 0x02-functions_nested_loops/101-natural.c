#include <stdio.h>

/**
 * main - print all natural numbers that are
 * divisable on 3 or 5 or both.
 * Return: 0 always
 */
int main(void)
{
	int i;
	long total;


	total = 0;
	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			total += i;
		}
	}

	printf("%ld\n", total);
	return (0); }
