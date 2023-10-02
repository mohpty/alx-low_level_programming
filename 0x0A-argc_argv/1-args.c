#include <stdio.h>
#include "main.h"

/**
 * numOfArgs - return the number of command line args
 * @argc: number of command line arguments
 * @argv: what are the command line arguments passed
 * Return: 0 always
 */
void numOfArgs(int argc, char *argv[])
{
	argv[0] = argv[0];
	printf("%d\n", argc - 1);
}

/**
 * main - driver code
 * @argc: number of CLA
 * @argv: array of CLA
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	numOfArgs(argc, argv);
	return (0);
}
