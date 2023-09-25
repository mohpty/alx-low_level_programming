#include "main.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to pointer to source string
 * @to: pointer to output string
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	while (*to != '\0')
	{
		*to = **s;

		to++;
		*s += 1;
		continue;
	}

}
