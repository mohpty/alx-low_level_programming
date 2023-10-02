#include <stdio.h>
#include "main.h"

/**
 * printArgs - print command line arguments
 * @argc: number of command line arguments
 * @argv: what are the command line arguments passed
 * Return: 0 always
 */
void printArgs(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}

/**
 * main - driver code
 * @argc: number of CLA
 * @argv: array of CLA
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	printArgs(argc, argv);
	return (0);
}
