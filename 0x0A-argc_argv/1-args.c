#include <stdio.h>
#include "main.h"

/**
 * main - return the number of command line args
 * @argc: number of command line arguments
 * @argv: what are the command line arguments passed
 * Return: 0 always
 */
void main(int argc, char *argv[])
{
	argv[0] = argv[0];
	printf("%d\n", argc - 1);
}
