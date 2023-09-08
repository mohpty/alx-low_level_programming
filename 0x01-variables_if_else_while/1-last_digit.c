#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - check if the last digit to a three conditions
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int lastdigit = n % 10;

	printf("Last digit of %d is %d and ", n, lastdigit);
	if (lastdigit > 5)
	{
		printf("is greater than 5\n");
	}
	else if (lastdigit < 6 && lastdigit != 0)
	{
		printf("is less than 6 and not 0\n");
	}
	else if (lastdigit == 0)
	{
		printf("is 0\n");
	}
	return (0);
}
