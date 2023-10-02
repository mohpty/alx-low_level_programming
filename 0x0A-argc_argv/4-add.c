#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add - return the result of multiplication
 * @argc: number of command line arguments
 * @argv: what are the command line arguments passed
 * Return: 0 always
 */
int add(int argc, char *argv[])
{
	int i, n, total = 0;
	unsigned long int j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
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
		if (n >= 0)
			total += n;
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
	add(argc, argv);
	return (0);
}
