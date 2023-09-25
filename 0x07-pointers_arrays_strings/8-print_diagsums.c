#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of diagonals of square matrix
 * @a: pointer to matrix
 * @size: height/width
 */
void print_diagsums(int *a, int size)
{
	int *diags[][] = *a;
	int i, sum1, sum2;

	sum1 = sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += a[i][i];
		sum2 += a[i][size - i - 1];
	}
	printf("%d, %d", sum1, sum2);

}
