#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all the natural numbers from n to 98
 * @n: starting number
 * Return: void
 */
void print_to_98(int n)
{
	long int i;

	if (n >= 98)
	{
		for (i = n ; i >= 98; i--)
		{
			printf("%ld", i);
			if (i != 98)
				printf(", ");
			else
				printf("\n");
		}
	}

	else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%ld", i);
			if (i != 98)
				printf(", ");
			else
				printf("\n");
		}
	}
}
