#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to integer
 * @s: the string
 * Return: converted int.
 */
int _atoi(char *s)
{
	/**
	 * sign:
	 * 	start from LtoR
	 * 	we count all - and +, the bigger one wins
	 * 	if equal the most recent one wins
	 *
	 * numbers:
	 * 	start from RtoL
	 * 	first digit is multiply by 1
	 * 	second digit is multiply by 10
	 * 	...
	 * 	nth digit is multiply by i (1, 10, 100,..)
	 */

	/*char recent;*/
	int cntP, cntM;
	/*int digit = 1;*/
	char *p1 = s;
	char *p2 = s;
	int started = 0;
	char *out = "";

	cntP = cntM = 0;
	while (*p1 != '\0')
	{
		if (*p1 == '-')
		{
			cntM++;
		}
		else
		{
			cntP++;
		}

		p1++;
	}

	

	while (1)
	{
		if (*p2 >= 48 || *p2 < 58)
		{
			started = 1;
			out += *p2;
		}
		else
		{
			if (started)
			{
				break;
			}
			else
			{
				p2++;
				continue;
			}

		}
		if (*p2 == '\0')
			break;
		p2++;
	}

	printf("%s\n", out);

	return (0);
}
