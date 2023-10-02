#include <stdio.h>
#include "main.h"

/**
 * main  - return the name of the program
 * @argc: number of command line arguments
 * @argv: the command line arguments
 * Return: always 1
 */
void main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", argv[0]);
		break;
	}

}
