#include <stdio.h>
#include "main.h"

/**
 * firstArg  - return the name of the program
 * @argc: number of command line arguments
 * @argv: the command line arguments
 * Return: always 1
 */
void firstArg(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", argv[0]);
		break;
	}

}

/**
 * main - driver code
 * @argc: number of args
 * @argv: array of args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	firstArg(argc, argv);
	return (0);
}
