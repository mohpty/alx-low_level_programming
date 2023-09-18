#include "main.h"

/**
 * _atoi - convert a string to integer
 * @s: the string
 * Return: converted int.
 */
int _atoi(char *s)
{
	bool began = false;
	int minus, plus, total;

	plus = minus = total = 0;

	while (*s != '\0')
	{
		if (! (*s >= 48 || *s < 58 || *s == 43 || *s == 45))
		{
			/* if it isn't a digit or a sign */
			if (began)
				break; /* break if we end collecting our num */
			else
				continue; /* or just ignore it */
		}

		if (*s >= 48 || *s < 58)
		{
			began = true;

		}
		else if (*s == 43)
		{
			plus++;
		}
		else if (*s == 45)
		{
			minus++;
		}
		

	}
}
