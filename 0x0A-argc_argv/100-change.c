#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * change - return change in a greedy fashion
 * @argc: number of command line arguments
 * @argv: what are the command line arguments passed
 * Return: 0 always
 */
int change(int argc, char *argv[])
{
	int i, n, total = 0;
	unsigned long int j;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	for (j = 0; j < strlen(argv[1]); j++)
	{
		if (argv[i][j] >= 48 && argv[i][j] < 58)
		{
			continue;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	n = atoi(argv[i]);
	while (n)
	{
		if (n - 25 >= 0)
			n -= 25;
		
		else if (n - 10 >= 0)
			n -= 10;
		
		else if (n - 5 >= 0)
			n -= 5;
		
		else if (n - 2 >= 0)
			n -= 2;
		
		else if (n - 1 >= 0)
			n -= 1;

		total++;
	}

	printf("%d\n", total);
	return (0);
}

/**
 * main - driver code
 * @argc: number of cla
 * @argv: array of cla
 * Return: 0
 */
int main(int argc, char *argv[])
{
	change(argc, argv);
	return (0);
}
