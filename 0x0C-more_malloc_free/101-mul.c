#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int onlyDigits(int argc, char *commands[]);

/**
 * mul - multiplication using CMA
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: void
 */
int main(int argc, char *argv[])
{
	long int a, b;

	if (!onlyDigits(argc, argv) || argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%ld\n", a * b);
	
	return (0);
}

/**
 * onlyDigits - check if all arguments are numbers
 * @argc: number of commands
 * @commands: command array
 * Return: 1 if true, 0 otherwise
 */
int onlyDigits(int argc, char *commands[])
{
	int i;
	char *p1;

	for (i = 1; i < argc; i++)
	{
		p1 = commands[i];
		for (p1 = commands[i]; *p1 != '\0'; p1++)
		{
			if (*p1 < 48 && *p1 >= 58)
			{
				printf("~%c\n", *p1);
				return (0);

			}
		}
	}
	return (1);
}
