#include <stdio.h>
#include <stdlib.h>
/**
 * mul  - return the result of multiplication
 * @argc: number of command line arguments
 * @argv: what are the command line arguments passed
 * Return: 0 always
 */
int mul(int argc, char *argv[])
{
	int a, b, r;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	r = a * b;
	printf("%d\n", r);
	return (0);
}

/**
 * main - driver code
 * @argc: number of cla
 * @argv: array of cla
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	mul(argc, argv);
	return (0);
}
