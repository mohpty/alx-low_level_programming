#include <stdio.h>
#include "main.h"

/**
 * print_array - print some elements of an array
 * @n: number of elements
 * @a: pointer to the array
 * Return: void
 */
void print_array(int *a, int n)
{
	int counter = 1;

	while (counter <= n)
	{
		printf("%d", *a);

		if (counter != n)
			printf(", ");

		counter++;
		a++;
	}
	printf("\n");
}
